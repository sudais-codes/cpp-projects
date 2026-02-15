#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter a number :  ";
    cin >> number;
 if (number > 0)
        cout << number << " is a natural number.";
    else
        cout << number << " is NOT a natural number.";
    return 0;
}