#include<iostream>
using namespace std;
class student{
public:

string name;
int marks;

};

int main(){

    student s[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter student no " << i+1 << " Name ";
        cin >> s[i].name;
        cout << "Enter marks of student no " << i+1 << "  " ;
        cin >> s[i].marks;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << "--------------" << endl;
        cout << "Name = " << s[i].name << endl;
        cout << "Marks = " << s[i].marks << endl;
        cout << "--------------" << endl;
    }
    
}