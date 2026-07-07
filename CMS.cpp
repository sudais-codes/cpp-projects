#include <iostream>
using namespace std;
class CMS
{
private:
    string name;
    int student_id;
    int marks;
    int age;

public:
    void setdata()
    {
        string n;
        int id;
        int m, a;

        cout << "Enter student name ";
        cin >> n;
        name = n;
        cout << "Enter student ID ";
        cin >> id;
        student_id = id;
        cout << "Enter marks  ";
        cin >> m;
        marks = m;
        cout << "Enter Age ";
        cin >> a;
        age = a;
    }
    void display()
    {
        cout << "-----STUDENT INFO------" << endl;
        cout << "Name = " << name << endl;
        cout << "Student ID = " << student_id << endl;
        cout << "Marks = " << marks << endl;
        cout << "Age = " << age << endl;
        cout << "---------------------------------" << endl;
    }
};

int main()
{
    CMS s[50];
    int value;
    int count = 0;
    cout << "======= BLUE PRINT OF PROGRAMM ======" << endl;
    cout << R"(             Student Class
      +----------------------+
      | studentID    (private)|
      | name         (private)|
      | age          (private)|
      | marks        (private)|
      +----------------------+
      | inputData()          |
      | displayData()        |
      | updateMarks()        |
      +----------------------+
                |
                | Create Object
                v
          Student s1;)";
          cout << endl;
          cout << endl;
    cout << "How many student data you want to enter ";
    cin >> value;

    for (int i = 0; i < value; i++)
    {
        char op;
        cout << "Do you want to add student [Y/N] ";
        cin >> op;
        op = tolower(op);

        if (op == 'y')
        {
            cout << "Student number " << i + 1 << endl;
            s[i].setdata();
            cout << "Student added success." << endl;
            count++;
        }
        else
        {
            break;
        }
    }

    char op;
    cout << "Do you want to see students data [Y/N] ";
    cin >> op;
    op = tolower(op);
    if (op == 'y')
    {
        if (count == 0)
        {
            cout << "No student record found ";
        }
        else
        {
            for (int i = 0; i < count; i++)
            {

                s[i].display();
            }
        }
    }
    else
    {
        cout << "Thanks for using sudais khan CMS " << endl;;
        cout << "Programm exiting...";
    }
}

