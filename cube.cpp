#include <iostream>
using namespace std;
int main(){
    int number,cube;
    // Formula for cube is n*n*n.
    cout << "Enter your number : ";
    cin >> number;
    cube = number * number * number;
    cout << "Cube of " << number << " is " << cube;
    return 0;
}