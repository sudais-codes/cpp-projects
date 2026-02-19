#include <iostream>
using namespace std;
int quantity[4] = {0,0,0,0};
int price[4] = {500,300,700,150};
void showMenu(){
    cout << "\n-------FAST FOOD MENU--------"<< endl;
    cout << "1.Burger     = 500" << endl;
    cout << "2.Shawarma   = 300" << endl;
    cout << "3.Pizza      = 700" << endl;
    cout << "4.Drink      = 150" << endl;
    cout << "5.Show bill" << endl;
    cout << "6.Exit..." << endl;
}

void bill(){
    int total = 0;
    cout << "\n-------YOUR BILL-------" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (quantity[i] > 0)
        {
            total += quantity[i]*price[i];
        }
    }
     cout << "Your total bill is " << total ;
}

int main(){
    int pin = 1234 , password;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter your pin : ";
        cin >> password;
        if (password == pin)
        {
            cout << "Pin accepted.";
            break;
        }
        else{
            cout << "Invalid pin try again." << endl;
        }
        if (i == 3)
        {
            cout << "Pin limit reached.";
            return 0;
        }
        
   }
    int choice,qty;
    cout << "------------ WELLCOME TO SUDAIS FOOD POINT ------------" << endl;
    do
    {
        showMenu();
        cout << "Enter your choice  :  ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        cout << "Enter Burger quantity   :  ";
        cin >> qty;
        quantity[0] += qty;
            break;
        case 2:
        cout << "Enter Shawarma quantity   :  ";
        cin >> qty;
        quantity[1] += qty;
            break;
        case 3:
        cout << "Enter Pizza quantity   :  ";
        cin >> qty;
        quantity[2] += qty;
            break;
        case 4:
        cout << "Enter Drink quantity   :  ";
        cin >> qty;
        quantity[3] += qty;
            break;
        case 5:
        bill();
            break;
        case 6:
        cout << "Thanks for using.";
        bill();
        return 0;

        default:
        cout << "Invalid choice.";
            break;
        }


    } while (choice != 6);
    
    return 0;
}