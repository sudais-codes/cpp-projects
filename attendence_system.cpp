#include <iostream>
using namespace std;
class student{
    public:

    string name = "Sudais Khan" ;

    void display(){

        for (int i = 0; i < 10; i++)
        {
            cout << i+1 << " Name = " << name << endl;
        }
    }
};
int main(){
    student s1;
    s1.display();


    return 0;
}