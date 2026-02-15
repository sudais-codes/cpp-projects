#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum = 0;
    float avg;
    for (int  i = 0; i < 5; i++)
    {
        cout << "Enter your marks of subject number " << i+1 << " : ";
        cin >> arr[i];
        cout << endl;
        sum += arr[i];
    }
    avg = sum/float(5);
    cout << "Your total marks is " << sum << endl;
    cout << "Your average marks is " << avg;





    return 0;
}