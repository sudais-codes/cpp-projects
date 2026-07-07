#include <iostream>
using namespace std;
class Login{
    public:
    void login(){
        cout << "Login success." << endl;
    }
};
class Withdraw{
    public:
    void withdraw(){
        cout << "Withdraw success." << endl;
    }
};
class ATM : public Login , public Withdraw{
    public:
    void reciept(){
        cout << "Reciept printed. " << endl;
    }
};

int main(){
    ATM user;
    user.login();
    user.withdraw();
    user.reciept();
    cout << "Diagram..." << endl;
    cout << R"( Parent 1      Parent 2
     \          /
      \        /
       \      /
      Child Class )" ;
    return 0;
}