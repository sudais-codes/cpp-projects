#include <iostream>
using namespace std;
int quantity[10] = {0};
int price[10] = {280, 160, 140, 60, 320, 300, 90, 110, 130, 650};
void ShowMenu()
{
    for (int i = 1; i <= 3; i++)
    {
        cout << endl;
    }
    
    cout << "----------ITEM MENU----------" << endl;
    cout << "1.Rice        (1kg) = 280" << endl;
    cout << "2.Sugar       (1kg) = 160" << endl;
    cout << "3.Flour       (1kg) = 140" << endl;
    cout << "4.Salt        (1kg) = 60" << endl;
    cout << "5.Red Lentils (1kg) = 320" << endl;
    cout << "6.Chickpeas   (1kg) = 300" << endl;
    cout << "7.Potatoes    (1kg) = 90" << endl;
    cout << "8.Onions      (1kg) = 110" << endl;
    cout << "9.Tomatoes    (1kg) = 130" << endl;
    cout << "10.Chicken    (1kg) = 650" << endl;
    cout << "11.Show Bill" << endl;
    cout << "12.Exit..." << endl;
}

void ShowBill()
{
    int total = 0;
    float tax, finalbill;
    for (int i = 0; i < 10; i++)
    {
        total += quantity[i] * price[i];
    }

    tax = total * 0.05;
    finalbill = total + tax;

    cout << "---- BILL ----" << endl;
    cout << "Total bill : Rs " << total << endl;
    cout << "Tax charges (5%) : Rs " << tax << endl;
    cout << "Final bill  : Rs " << finalbill << endl;
}

int main()
{
    int choice, qty;
    cout <<" ------------WELLCOME TO SUDAIS GROCERY SHOP------------" << endl;

    do
    {
        ShowMenu();
        cout << "Enter your choice ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Rice quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[0] += qty;
            break;
        case 2:
            cout << "Enter Sugar quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[1] += qty;
            break;
        case 3:
            cout << "Enter Flour quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[2] += qty;
            break;
        case 4:
            cout << "Enter Salt quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[3] += qty;
            break;
        case 5:
            cout << "Enter Red Lentils quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[4] += qty;
            break;
        case 6:
            cout << "Enter Chickpeas quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[5] += qty;
            break;
        case 7:
            cout << "Enter Potatoes quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[6] += qty;
            break;
        case 8:
            cout << "Enter Onions quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[7] += qty;
            break;
        case 9:
            cout << "Enter Tomatoes quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[8] += qty;
            break;
        case 10:
            cout << "Enter Chicken quantity : ";
            cin >> qty;
            cout << "Item added succesfully";
            quantity[9] += qty;
            break;
        case 11:
            ShowBill();
            break;

        case 12:
            cout << "Thanks for using.";
            cout << "\n Your total bill is " << endl;
            ShowBill();
            break;

        default:
            cout << "Invalid choice try again";
            break;
        }
    } while (choice != 12);

    return 0;
}