#include <iostream>
using namespace std;
class LOGIN
{
public:
    int pin = 1234;
    float balance = 5000;

    void login()
    {
        int epin;
        cout << "Enter your pin ";
        cin >> epin;
        if (epin == pin)
        {
            cout << "Wellcome login success" << endl;
            cout << "Balance is " << balance;
        }
        else
        {
            cout << "Invalid pin.";
            return;
        }
    }
};
int main()
{
    LOGIN user;
    user.login();
}