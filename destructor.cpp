#include <iostream>
using namespace std;
class ATM{
    public:

    ATM(){
        cout << "ATM is startded" << endl;
        cout << "Constructor is using" << endl;
    }

    ~ATM(){
        cout << "ATM closed successfully." << endl;
        cout << "Destructor is called";
    }
};

int main(){
    ATM user;
    cout << "Hello im main function " << endl;
    return 0;
}
