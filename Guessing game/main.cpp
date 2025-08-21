#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <limits>

class WordGuessingGame {
private:
    std::vector<std::string> wordList;
    std::string secretWord;
    std::string guessedWord;
    int maxAttempts;
    int attemptsLeft;
    bool gameWon;

public:
    WordGuessingGame() {
        // Initialize word list
        wordList = {
            "programming", "computer", "algorithm", "software", "developer",
            "language", "function", "variable", "database", "network",
            "security", "internet", "application", "system", "interface"
        };

        maxAttempts = 6;
        attemptsLeft = maxAttempts;
        gameWon = false;
    }

    void initializeGame() {
        // Seed random number generator
        std::srand(std::time(0));

        // Select random word
        secretWord = wordList[std::rand() % wordList.size()];

        // Initialize guessed word with underscores
        guessedWord = std::string(secretWord.length(), '_');

        attemptsLeft = maxAttempts;
        gameWon = false;
    }

    void displayGameState() {
        std::cout << "\n=== WORD GUESSING GAME ===\n";
        std::cout << "Guess the word: ";

        // Display guessed word with spaces between characters
        for (char c : guessedWord) {
            std::cout << c << " ";
        }

        std::cout << "\nAttempts left: " << attemptsLeft << "/" << maxAttempts;
        std::cout << "\nWord length: " << secretWord.length() << " letters\n";
    }

    void processGuess() {
        std::cout << "\nEnter your guess (a single letter or the whole word): ";
        std::string guess;
        std::getline(std::cin, guess);

        // Convert guess to lowercase for case-insensitive comparison
        std::transform(guess.begin(), guess.end(), guess.begin(), ::tolower);

        if (guess.length() == 1) {
            // Single letter guess
            char letter = guess[0];
            bool found = false;

            // Check if letter is in secret word
            for (int i = 0; i < secretWord.length(); i++) {
                if (secretWord[i] == letter && guessedWord[i] == '_') {
                    guessedWord[i] = letter;
                    found = true;
                }
            }

            if (!found) {
                std::cout << "Letter '" << letter << "' is not in the word.\n";
                attemptsLeft--;
            } else {
                std::cout << "Good guess! Letter '" << letter << "' is in the word.\n";
            }

        } else if (guess.length() == secretWord.length()) {
            // Whole word guess
            if (guess == secretWord) {
                gameWon = true;
                guessedWord = secretWord;
            } else {
                std::cout << "Incorrect word guess!\n";
                attemptsLeft--;
            }
        } else {
            std::cout << "Invalid input! Please enter a single letter or a word of length "
                      << secretWord.length() << ".\n";
        }
    }

    bool isGameOver() {
        // Check if player won
        if (guessedWord == secretWord) {
            gameWon = true;
            return true;
        }

        // Check if player lost
        if (attemptsLeft <= 0) {
            return true;
        }

        return false;
    }

    void displayResult() {
        if (gameWon) {
            std::cout << "\n🎉 CONGRATULATIONS! 🎉\n";
            std::cout << "You guessed the word: " << secretWord << "\n";
            std::cout << "You had " << attemptsLeft << " attempts remaining.\n";
        } else {
            std::cout << "\n💀 GAME OVER 💀\n";
            std::cout << "The secret word was: " << secretWord << "\n";
            std::cout << "Better luck next time!\n";
        }
    }

    bool playAgain() {
        std::cout << "\nWould you like to play again? (y/n): ";
        char choice;
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        return (choice == 'y' || choice == 'Y');
    }

    void run() {
        bool playing = true;

        while (playing) {
            initializeGame();

            std::cout << "Welcome to the Word Guessing Game!\n";
            std::cout << "Try to guess the secret word. You can guess letters or the entire word.\n";

            while (!isGameOver()) {
                displayGameState();
                processGuess();
            }

            displayResult();
            playing = playAgain();
        }

        std::cout << "\nThanks for playing! Goodbye!\n";
    }
};

int main() {
    WordGuessingGame game;
    game.run();
    return 0;
}
