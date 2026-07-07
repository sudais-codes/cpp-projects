#include <iostream>
using namespace std;
class ATM
{
public:
    int pin;
    float balance;
    ATM()
    {
        pin = 1234;
        balance = 500;
    }
    ATM(int p)
    {
        pin = p;
        balance = 300;
    }
    ATM(int p, float b)
    {
        pin = p;
        balance = b;
    }

    void display()
    {
        cout << "Pin = " << pin << endl;
        cout << "Balance = " << balance << endl;
        cout << "--------------------------------" << endl;
    }
};

int main()
{
    ATM user1;
    ATM user2(1212);
    ATM user3(1122, 600);
    user1.display();
    user2.display();
    user3.display();

    cout << "Diagram..." << endl;
    cout << R"(

                 ATM Class
                     |
    +----------------+----------------+
    |                |                |
    v                v                v
  ATM()         ATM(int)     ATM(int,double)

    |                |                |
    v                v                v
  user1          user2           user3

)";
}