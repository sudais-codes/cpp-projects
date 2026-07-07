#include <iostream>
using namespace std;

class ATM
{
public:
    int pin;

    // Constructor
    ATM()
    {
        pin = 1234;
        cout << "ATM System Started." << endl;
    }

    void login()
    {
        int enteredPin;

        cout << "Enter PIN: ";
        cin >> enteredPin;

        if(enteredPin == pin)
            cout << "Login Successful." << endl;
        else
            cout << "Wrong PIN." << endl;
    }

    // Destructor
    ~ATM()
    {
        cout << "Thank you for using our ATM." << endl;; 
    }
};

int main()
{
    ATM user;

    user.login();

    return 0;
}