#include <iostream>
using namespace std;
class mobile
{
public:
    string brand;
    string model;
    int price;

    // SETTER FUNCTION
    void setdata(string brand, string model, int price)
    {
        this->brand = brand;
        this->model = model;
        this->price = price;
    }
    // GETTER FUNCTION.
    void display()
    {
        cout << "MOBILE INFO " << endl;
        cout << "BRAND =  " << brand << endl;
        cout << "MODEL =  " << model << endl;
        cout << "PRICE =  " << price << endl;
    }
};

int main()
{

    mobile m1;
    m1.setdata("Samsung", " S10", 10500);
    m1.display();

    return 0;
}