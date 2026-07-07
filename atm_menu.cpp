#include <iostream>
using namespace std;

class ATM
{
public:
    float balance = 50000;
    int correct_pin = 12345;
    void show_diagram()
    {
        cout << R"(

              ATM Class
         +-----------------+
         |   balance       |
         |   pin           |
         +-----------------+
         | login()         |
         | deposit()       |
         | withdraw()      |
         | checkBalance()  |
         +-----------------+
                 |
                 | Create Object
                 v
             ATM user;
                 |
                 v
         user.login();
         user.deposit();
         user.withdraw();

)";
    }

    void checkbalance()
    {
        cout << "Your current balance is " << balance;
    }

    void deposite()
    {
        int amount;
        cout << "Enter your amount to deposit ";
        cin >> amount;
        if (amount <= 0)
        {
            cout << "Enter positive amount to deposit." << endl;
        }
        else
        {
            balance += amount;
            cout << "Deposit success.";
        }
        return;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter amount to withdraw ";
        cin >> amount;
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw success." << endl;
        }
        else
        {
            cout << "Insufficient  balance" << endl;
        }
        return;
    }
};

int main()
{
    ATM user;
    int choice;
    do
    {
        cout << "\n-----ATM MENU-----" << endl;
        cout << "1. Check Balance " << endl;
        cout << "2. Deposit " << endl;
        cout << "3. Withdraw " << endl;
        cout << "4. View Diagram " << endl;
        cout << "5. Exit... " << endl;
        cout << "Enter your choice  ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            user.checkbalance();
            break;
        case 2:
            user.deposite();
            break;
        case 3:
            user.withdraw();
            break;
        case 4:
            user.show_diagram();
            break;
        case 5:
            cout << "Thanks for using sudais khan ATM" << endl;
            cout << "Programm exiting....";
            break;

        default:
            cout << "Invalid choice try again." << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}