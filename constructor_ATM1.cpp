#include <iostream>
using namespace std;
class ATM
{
public:
    int pin;
    float balance;
    ATM(int p, float b)
    {
        pin = p;
        balance = b;
    }

    void display()
    {
        cout << "Pin = " << pin << endl;
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    ATM user(1234, 500);
    user.display();
    cout << "Diagram..." << endl;
    cout << R"(          Parameterized Constructor
                         
                         ATM user(1234,10000);
                         
                                 |
                                 v
                         
                         Constructor Receives
                         
                         PIN = 1234
                         Balance = 10000
                         
                                 |
                                 |
                                 v
                         Object Ready to Use)";
    return 0;
}