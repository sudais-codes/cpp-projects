#include <iostream>
using namespace std;
void deposit(float &balance)
{
    int amount;
    cout << "Enter amount to deposite : ";
    cin >> amount;
    if (amount < 0)
    {
        cout << "Enter positive amount to deposite" << endl;
    }
    else
    {

        balance += amount;
        cout << "Deposite successfully.";
    }
}
void withdraw(float &balance)
{
    int amount;
    cout << "Enter amount to withdraw : ";
    cin >> amount;
    if (amount < 0)
    {
        cout << "Enter positive amount" << endl;
    }
    else if (amount > balance)
    {
        cout << "Insufficient balance" << endl;
    }
    else
    {
        balance -= amount;
        cout << "Withdraw successfully.";
    }
}
void showbalance(float &balance)
{
    cout << "Current balance is " << balance;
}
int main()
{
    float amount = 0;
    int choice;
    int key;
    string username = "sudais";
    string user;
    int pin = 1234;
    int password;
    do
    {
        cout << "\n WELLCOME TO SUDAIS BANK SYSTEM" << endl;
        cout << "1. Sign up account \n";
        cout << "2. Login your account \n";
        cout << "3. Exit...\n";
        cout << "Enter your choice : ";
        cin >> key;
        if (key == 1)
        {
            cout << "Set your username : ";
            cin >> username;
            cout << "Set your pin ";
            cin >> pin;
            cout << "Account created successfully." << endl;
            cout << "Now login your account " << endl;
        }

        if (key == 2)
        {
            cout << "Enter your username : ";
            cin >> user;
            cout << "Enter your password : ";
            cin >> password;
            if (user == username && password == pin)
            {
                cout << "Login success.." << endl;
                do
                {
                    cout << "\n================================" << endl;
                    cout << "      BANK MANAGEMENT SYSTEM" << endl;
                    cout << "================================" << endl;
                    cout << " 1. Deposite \n ";
                    cout << " 2. Withdraw \n ";
                    cout << " 3. Check Balance \n ";
                    cout << " 4. Exit... \n ";
                    cout << " Enter your choice : ";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        deposit(amount);
                        break;
                    case 2:
                        withdraw(amount);
                        break;
                    case 3:
                        showbalance(amount);
                        break;
                    case 4:
                        cout << "Thanks for using...";
                        break;
                    default:
                        cout << "Invalid choice ";
                        break;
                    }

                } while (choice != 4);
            }
            else
            {
                cout << "Account not found.. ";
            }
        }
        if (key == 3)
        {
            cout << "Thank you for using Sudais Bank System." << endl;
        }
    } while (key != 3);

    return 0;
}