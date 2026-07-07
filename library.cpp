#include <iostream>
using namespace std;
// GLOBAL ARRAYS
int rollnumber[100];
string names[100];
int total = 0;
void addstudent()
{
    cout << "Enter roll number  ";
    cin >> rollnumber[total];
    cin.ignore();
    cout << "Enter name of your student ";
    getline(cin,names[total]);

    total++;
    cout << "Student added succesfully.";
}

void display()
{
    if (total == 0)
    {
        cout << "No student found.";
        return;
    }
    cout << "===== Student list ====\n";
    for (int i = 0; i < total; i++)
    {
        cout << "Roll number of the student is " << rollnumber[i] << endl;
        cout << "Name of the student is " << names[i] << endl;
    }
}
void searchstudent()
{
    int id;
    if (total == 0)
    {
        cout << "No student found.";
        return;
    }
    cout << "Enter roll number of the student ";
    cin >> id;
    for (int i = 0; i < total; i++)
    {
        if (id == rollnumber[i])
        {
            cout << "Name is " << names[i] << endl;
            cout << "Roll number is " << rollnumber[i];
        }
        else
        {
            cout << "Invalid roll number try again.";
            return;
        }
    }
}
int main()
{

    int choice;
    do
    {
        cout << "\n=== WELLCOME TO SUDAIS SCHOOL SYSTEM ===\n";
        cout << "1. Add student " << endl;
        cout << "2. Display student " << endl;
        cout << "3. Search student " << endl;
        cout << "4. Exit programm... " << endl;
        cout << "Enter your choice :  ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            addstudent();
            break;
        case 2:
            display();
            break;
        case 3:
            searchstudent();
            break;
        case 4:
            cout << "Thanks for using \n";
            cout << "Programm exiting...";
            break;

        default:
            cout << "Invalid number try again." << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}