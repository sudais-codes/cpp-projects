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
    ATM user3=user2;
    ATM user4 = user1;
    user1.display();
    user2.display();
    user3.display();
    user4.display();

    cout << "Diagram..." << endl;
    cout << R"(           Original Object

         ATM user1
      +----------------+
      | PIN = 1234     |
      | Balance=10000  |
      +----------------+
              |
              | Copy Constructor
              v
         ATM user2
      +----------------+
      | PIN = 1234     |
      | Balance=10000  |
      +----------------+ )";


}