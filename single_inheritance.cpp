#include <iostream>
using namespace std;
class LOGIN{
    public:
    int pin = 1234;
    int enterpin;

    void login(){
        cout << "Enter pin to login :  ";
        cin >> enterpin;
        if (enterpin == pin)
        {
            cout << "Login success.";
        }else{
            cout << "Invalid pin try again";
            return;
        }
        
    }
};
class ATM : public LOGIN{
    public:
};
int main(){
    ATM user1;
    user1.login();
    return 0;
}