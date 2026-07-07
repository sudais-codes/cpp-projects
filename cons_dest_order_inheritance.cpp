#include <iostream>
using namespace std;
class BANK{
    public:
    BANK(){
        cout << "Bank server connecting." << endl;
    }
    ~BANK(){
        cout << "Bank server disconnecting...." << endl;
    }
};
class ATM : public BANK{
    public:
    ATM(){
        cout << "ATM machine started." << endl;
    }
    ~ATM(){
        cout << "ATM machine closed." << endl;
    }
};

int main(){
    ATM user;
    cout << "Costumer is waiting." << endl;

    cout << "Diagram..." << endl;
   cout << R"(Create ATM Object
        |
        v
Bank Constructor
        |
        v
ATM Constructor
        |
        v
Program Executes
        |
        v
ATM Destructor
        |
        v
Bank Destructor
)";

    return 0;
}