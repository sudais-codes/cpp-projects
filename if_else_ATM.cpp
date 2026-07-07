#include <iostream>
using namespace std;
class atm
{
public:
    string name;
    int pass = 1234;
    atm()
    {
        name = "Sudais khan";
    }

    void set()
    {
        int pin;
        cout << "Enter pin ";
        cin >> pin;
        if (pin == pass)
        {
            cout << "Wellcome " << name;
        }
        else
        {
            cout << "Invalid pin";
            return;
        }
    }
};
int main()
{
    atm a1;
    a1.set();
}