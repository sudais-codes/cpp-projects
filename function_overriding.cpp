#include <iostream>
using namespace std;
class A{
    public:
    void getdata(){
        cout << "This is class A";
    }
};
class B : public A{
    public:
    void getdata(){
        cout << "This is class B";
    }
};
int main(){
    B user;
    user.getdata();
}