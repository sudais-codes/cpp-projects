#include <iostream>
using namespace std;
// MULTI LEVEL INHERITANCE.
class A{
    public:
    void dataA(){
        cout << "This is class A " << endl;
    }
};
class B : public A{
    public:
    void dataB(){
        cout << "This is class B " << endl;
    }
};
class C : public B{
    public:
    void dataC(){
        cout << "This is class C " << endl;
    }
};
int main(){
    C user;
    user.dataA();
    user.dataB();
    user.dataC();
    cout << "Diagram..." << endl;
    cout << R"(Grandparent
        |
        v
      Parent
        |
        v
     Child)" ;
    return 0;
}