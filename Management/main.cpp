#include <iostream>

using namespace std;

int main()
{
    int quant;
    int choice;
    //Quantity
    int Qrooms = 0, Qpasta =0,Qburger = 0,Qnoodle=0, Qshake=0,Qchicken=0;
    //food items sold
    int Srooms = 0, Spasta =0, Sburger = 0,Snoodle=0, Sshake=0,Schicken=0;
    //Total price of items
    int Totalrooms = 0, Totalpasta =0,Totalburger = 0,Totalnoodle=0, Totalshake=0,Totalchicken=0;

    cout<<"\n Quantity of items we have";
    cout<<"\n Rooms available: ";
    cin>>Qrooms;
    cout<<"\n Quantity pasta available: ";
    cin>>Qpasta;
    cout<<"\n Quantity burgers available: ";
    cin>>Qpasta;
    cout<<"\n Quantity noodles available: ";
    cin>>Qnoodle;
    cout<<"\n Quantity shakes available: ";
    cin>>Qshake;
    cout<<"\n Quantity chicken available: ";
    cin>>Qchicken;

    m:

    cout<<"\n Please select from the menu options ";
    cout<<"\n\n 1.Rooms";
    cout<<"\n2.Pasta";
    cout<<"\n3.Burger";
    cout<<"\n4.Noodles";
    cout<<"\n5.Shake";
    cout<<"\n6.Chicken";
    cout<<"\n7.Information regarding sales and collections ";
    cout<<"\n7.Exit ";

    cout<<"\n Please Enter your choice! ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"\n Enter the number of rooms you want: ";
            cin>>quant;
            if(Qrooms-Srooms >= quant)
            {
                Srooms +=quant;
                Totalrooms+=quant*1200;
                cout<<"\n"<<quant<<" Rooms have been allocated to you ";
            }
            else
                cout<<"\n Only "<<Qrooms-Srooms<<" Rooms remaining in the hotel ";
                break;
        case 2:
            cout<<"\nEnter Pasta Quantity :";
            cin>>quant;
            if(Qpasta-Spasta >= quant)
            {
                Spasta +=quant;
                Totalpasta+=quant*200;
                cout<<"\n"<<quant<<" Pasta have been ordered for you ";
            }
            else
                cout<<"\n Only "<<Qpasta-Spasta<<" Pastas remaining in the kitchen ";
                break;
         case 3:
            cout<<"\nEnter Burger Quantity :";
            cin>>quant;
            if(Qburger-Sburger >= quant)
            {
                Sburger +=quant;
                Totalburger+=quant*150;
                cout<<"\n"<<quant<<" Burgers have been ordered for you ";
            }
            else
                cout<<"\n Only "<<Qburger-Sburger<<" Burgers remaining in the kitchen ";
                break;
        case 4:
            cout<<"\nEnter Noodles Quantity :";
            cin>>quant;
            if(Qnoodle-Snoodle >= quant)
            {
                Snoodle +=quant;
                Totalnoodle+=quant*150;
                cout<<"\n"<<quant<<" Noodles have been ordered for you ";
            }
            else
                cout<<"\n Only "<<Qnoodle-Snoodle<<" Noodles remaining in the kitchen ";
                break;
        case 5:
            cout<<"\nEnter Shakes Quantity :";
            cin>>quant;
            if(Qshake-Sshake >= quant)
            {
                Sshake +=quant;
                Totalshake+=quant*150;
                cout<<"\n"<<quant<<" Shakes have been ordered for you ";
            }
            else
                cout<<"\n Only "<<Qshake-Sshake<<" Shakes remaining in the kitchen ";
                break;
        case 6:
            cout<<"\nEnter Chicken Quantity :";
            cin>>quant;
            if(Qchicken-Schicken >= quant)
            {
                Schicken +=quant;
                Totalchicken+=quant*150;
                cout<<"\n"<<quant<<" Chicken have been ordered for you ";
            }
            else
                cout<<"\n Only "<<Qchicken-Schicken<<" Chicken remaining in the kitchen ";
                break;

         case 7:
            cout<<"\n Details of slaes and collections ";
            cout<<"\n Number of rooms we had :"<<Qrooms;
            cout<<"\n Number of rooms we gave out rent: "<<Srooms;
            cout<<"\n Remaining rooms :"<<Qrooms-Srooms;
            cout<<"\n Total rooms collection for the day :"<<Totalrooms;

            cout<<"\n\n Number of Pastas we had: "<<Qpasta;
            cout<<"\n Number of pastas we sold: "<<Spasta;
            cout<<"\n Number of pastas remaining: "<<Qpasta-Spasta;
            cout<<"\n Total pasta collection for the day :"<<Totalpasta;

            cout<<"\n\n Number of Burgers we had: "<<Qburger;
            cout<<"\n Number of Burgers we sold: "<<Sburger;
            cout<<"\n Number of Burgers remaining: "<<Qburger-Sburger;
            cout<<"\n Total burger collection for the day :"<<Totalburger;

            cout<<"\n\n Number of Noodles we had: "<<Qnoodle;
            cout<<"\n Number of Noodles we sold: "<<Snoodle;
            cout<<"\n Number of Noodles remaining: "<<Qnoodle-Snoodle;
            cout<<"\n Total Noodle collection for the day :"<<Totalnoodle;

            cout<<"\n\n Number of Shakes we had: "<<Qshake;
            cout<<"\n Number of shakes we sold: "<<Sshake;
            cout<<"\n Number of shakes remaining: "<<Qshake-Sshake;
            cout<<"\n Total shake collection for the day :"<<Totalshake;

            cout<<"\n\n Number of Chickens we had: "<<Qchicken;
            cout<<"\n Number of chicken we sold: "<<Schicken;
            cout<<"\n Number of chicken remaining: "<<Qchicken-Schicken;
            cout<<"\n Total chicken collection for the day :"<<Totalchicken;
         case 8:
            exit(0);
         default:
            cout<<"\n Please select the number mentioned above!!";
    }//end of switch
    goto m;

    return 0;
}
