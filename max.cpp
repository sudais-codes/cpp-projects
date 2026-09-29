#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;   
    int arr[MAX_SIZE];
    int n;

  
    cout << "Enter the number of elements (n > 10): ";
    cin >> n;
    while (n <= 10 || n > MAX_SIZE) {
        cout << "Invalid! n must be greater than 10 and at most "
             << MAX_SIZE << ". Enter n again: ";
        cin >> n;
    }


    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int maxIndex = 0;
    int min = arr[0];
    int minIndex = 0;


    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {          
            max = arr[i];
            maxIndex = i;
        }
        else if (arr[i] < min) {    
            min = arr[i];
            minIndex = i;
        }
    }

    cout << "Maximum value = " << max << endl;
    cout << "Index of maximum = " << maxIndex << endl;
    cout << "Minimum value = " << min << endl;
    cout << "Index of minimum = " << minIndex << endl;

    return 0;
}