#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int largest = 0, smallest = 0;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter your value number " << i+1 << "  : " ;
        cin >> arr[i];
        cout << endl;
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        else {
            smallest = arr[i];
        }
    }
    cout << "The largest value is " << largest << endl;
    cout << "The smallest value is " << smallest << endl;

    return 0;
}