#include<iostream>
using namespace std;
class ATM{
    public:
    int pin;
    float balance;
    // DEFAULT CONSTRUCTOR.
    ATM(){
        cout << "Account created successfully." << endl;
        pin = 1234;
        balance = 500;
    }
    void display(){
        cout << "Pin = " << pin << endl;
        cout << "Balance = " << balance << endl;
    }
};

int main(){
    ATM user1;
    user1.display();
    cout << "Programm diagram" << endl;
    cout << R"(            ATM Class

      +------------------+
      | Constructor()    |
      +------------------+
               |
               | Object Created
               v
         ATM user;
               |
               v
 Constructor Executes Automatically
               |
               v
 pin = 1234
 balance = 10000 )";
    return 0;
}