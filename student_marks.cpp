#include <iostream>
using namespace std;

class student {
    public:

    string name;

    int sum =0;
    void sum_of_marks(){

        string name ;
        int roll_num;
        cout << "Enter your name  " ;
        cin >> name;
        cout << "Enter your roll Number  " ;
        cin >> roll_num;

       int arr[6];

        for (int i = 0; i < 6; i++)
        {
            cout << "Enter marks for subject number  " << i+1 << "  " ;
            cin >> arr[i];
            sum += arr[i];
        }
        
        cout << "Name  " << name << endl;
        cout << "Roll Number  " << roll_num << endl;
        cout << "Total marks is  " << sum << endl;
    }
};



int main(){

    student s1;
    s1.sum_of_marks();


    return 0;
}