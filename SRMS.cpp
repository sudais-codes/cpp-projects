#include <iostream>
using namespace std;

int total = 0;

void calculateTotal(int E, int M, int P, int CH, int C)
{
    total = E + M + P + CH + C;
}

float calculatePercentage()
{
    float per = (total / 500.0) * 100;
    return per;
}

int main()
{
    string name;
    string Class;

    int rollnum;
    int English, Math, Physics, Chemistry, Computer;

    cout << "Enter student name : ";
    getline(cin, name);

    cout << "Enter student roll number : ";
    cin >> rollnum;

    cin.ignore();

    cout << "Enter the student Class : ";
    getline(cin, Class);

    cout << "\nEnter marks\n";

    cout << "English : ";
    cin >> English;

    cout << "Math : ";
    cin >> Math;

    cout << "Physics : ";
    cin >> Physics;

    cout << "Chemistry : ";
    cin >> Chemistry;

    cout << "Computer : ";
    cin >> Computer;

    calculateTotal(English, Math, Physics, Chemistry, Computer);

    cout << "\n=================================\n";
    cout << "      STUDENT REPORT CARD\n";
    cout << "=================================\n";

    cout << "Name      = " << name << endl;
    cout << "Roll No   = " << rollnum << endl;
    cout << "Class     = " << Class << endl;

    cout << "English   = " << English << endl;
    cout << "Math      = " << Math << endl;
    cout << "Physics   = " << Physics << endl;
    cout << "Chemistry = " << Chemistry << endl;
    cout << "Computer  = " << Computer << endl;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage  = " << calculatePercentage() << "%" << endl;

    cout << "=================================\n";

    return 0;
}