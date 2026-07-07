#include <iostream>
using namespace std;
class BANK
{
public:
    float balance;
    BANK()
    {
        balance = 20000;
    }

    void showbalance()
    {
        cout << "The current balance is " << balance << endl;
    }
};

class ATM : public BANK
{
public:
    int amount;

    void withdraw()
    {
        cout << "Enter amount to withdraw ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdraw success." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
};
int main()
{
    ATM user;
    user.showbalance();
    user.withdraw();
    user.showbalance();
}