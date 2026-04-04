#include <iostream>
using namespace std;

int quantity[6] = {0, 0, 0, 0, 0, 0};
int price[6] = {250, 450, 280, 360, 150, 250};

void ShowMenu()
{
    cout << "\n------SUDAIS MARKET------" << endl;
    cout << "1. Sugar    1kg =  250" << endl;
    cout << "2. Oil      1kg =  450" << endl;
    cout << "3. Milk     1kg =  280" << endl;
    cout << "4. Bean     1kg =  360" << endl;
    cout << "5. Tomato   1kg =  150" << endl;
    cout << "6. Potato   1kg =  250" << endl;
    cout << "7. Show Bill" << endl;
    cout << "8. Exit... " << endl;
}

bool hasPurchased()
{
    for (int i = 0; i < 6; i++)
    {
        if (quantity[i] > 0)
            return true;
    }
    return false;
}

void ShowBill()
{
    int total = 0;

    for (int i = 0; i < 6; i++)
    {
        total += quantity[i] * price[i];
    }

    if (total == 0)
    {
        cout << "No purchase made...\n";
        return;
    }

    int coupen = 1212;
    int coupencode;

    float tax = total * 0.05;

    cout << "Enter your coupen to remove tax : ";
    cin >> coupencode;

    if (coupencode == coupen)
    {
        tax = 0;
        cout << "Tax removed.\n";
    }
    else
    {
        cout << "Invalid coupen.\n";
    }

    float finalamount = total + tax;

    cout << "\n=====  BILL INFO ======" << endl;
    cout << "Subtotal   = RS " << total << endl;
    cout << "Tax (5%)   = RS " << tax << endl;
    cout << "Final Bill = RS " << finalamount << endl;
}

int main()
{
    int choice, qty;

    do
    {
        ShowMenu();
        cout << "Enter your choice ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter quantity of Sugar: ";
            cin >> qty;
            quantity[0] += qty;
            break;

        case 2:
            cout << "Enter quantity of Oil: ";
            cin >> qty;
            quantity[1] += qty;
            break;

        case 3:
            cout << "Enter quantity of Milk: ";
            cin >> qty;
            quantity[2] += qty;
            break;

        case 4:
            cout << "Enter quantity of Bean: ";
            cin >> qty;
            quantity[3] += qty;
            break;

        case 5:
            cout << "Enter quantity of Tomato: ";
            cin >> qty;
            quantity[4] += qty;
            break;

        case 6:
            cout << "Enter quantity of Potato: ";
            cin >> qty;
            quantity[5] += qty;
            break;

        case 7:
            ShowBill(); 
            break;

        case 8:
            if (hasPurchased())
            {
                cout << "\nFinal Bill:\n";
                ShowBill(); 
            }
            else
            {
                cout << "No purchase made.\n";
            }
            cout << "Thank You for Using.\n";
            break;

        default:
            cout << "Invalid choice try again.\n";
        }

    } while (choice != 8);

    return 0;
}