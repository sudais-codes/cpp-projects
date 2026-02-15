#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int greater =0 , equal =0 , less=0;
    for (int i = 0; i <10; i++)
    {
        cout << "Enter your value number " << i+1 << "  : ";
        cin >> arr[i];
        cout << endl;
        if (arr[i] > 10 )
        {
            greater++;
        }
        else if (arr[i] < 10)
        {
            less++;
        }
        else if (arr[i] == 10)
        {
            equal++;
        }
        
    }
    cout << "Values greater from 10 is  " << greater << endl;
    cout << "Values lessthen  from 10 is  " << less << endl;
    cout << "Values equal to 10 is  " << equal << endl;
    





    return 0;
}