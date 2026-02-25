#include<iostream>
using namespace std;
int factorial(int number){
    if (number == 1)
    {
        return 1;
    }
    
    return number * factorial(number -1);
}
int main(){
    int num;
    cout << "Enter your number to find factorial  :  ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num);
    return 0;
}