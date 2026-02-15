#include <iostream>
using namespace std;
int main(){
    float a , b, perimeter;
    cout << "Enter length (a) : ";
    cin >> a;
    cout << "Enter width (b) : ";
    cin >> b;
    perimeter = 2 * (a+b);
    cout << "Perimeter of Rectangle = " << perimeter  << endl;

    return 0;
}