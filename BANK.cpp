#include <iostream>
using namespace std;
// MINI BANK PROJECT CREADET BY SUDAIS-CODES.
bool check_pin(int input_pin , int &correct_pin) {
    if (input_pin == correct_pin) {
        cout << "Login successful!" << endl;
        return true;
    } else {
        cout << "Invalid pin. Access Denied." << endl;
        return false;
    }
}
void chang_pin(int &correct_pin){
    int old_pin;
    int new_pin;
    int confirm_new_pin;
    cout << "Enter your current pin ";
    cin >> old_pin;
    if (old_pin != correct_pin)
    {
        cout << "Current pin is invalid.";
        return;
    }
    
    cout << "Enter your new 4 digit pin ";
    cin >> new_pin;
    cout << "Confirm your new pin ";
    cin >> confirm_new_pin;
    if (new_pin == confirm_new_pin)
    {
        correct_pin = confirm_new_pin;
        cout << "Pin updated successfully." << endl;
        return;
    }
    else{
        cout << "pin not match try again." << endl;
    }

}
void show_menu(){
    cout << "\n=======BANK MENU=======" << endl;
    cout << "1. Show balance" << endl;
    cout << "2. Deposit money" << endl;
    cout << "3. Withdraw money" << endl;
    cout << "4. Change pin" << endl;
    cout << "5. Exit" << endl;
}
void deposit(int &money){
    int amount;
    cout << "Enter your amount to deposit " ;
    cin >> amount;
    if (amount < 0)
    {
        cout << "Enter positive amount";
        return;
    }
    
    money += amount;
    cout << "\nDeposite successfully."<< endl;
    cout << "Now your current balance is  " << money;
}

void withdraw(int &money){
    int amount;
    if (money == 0 )
    {
        cout << "Your account is empty.";
        return;
    }
    
    cout << "Enter your amount to withdraw " ;
    cin >> amount;
    if (amount > money)
    {
        cout << "Insufficient balance";
        return;
    }
    money -= amount;
    cout << "Withdraw successfully";
}
int main(){
    int balance = 0;
    int choice;
    int correct_pin = 1234;
    int pin;
    int attempt = 3;
    bool success = false;

    while (attempt > 0) {
        cout << "Enter your pin to login: ";
        cin >> pin;

        if (check_pin(pin, correct_pin)) {
            success = true; 
            break;          
        } else {
            attempt--; 
            if (attempt > 0) {
                cout << "Attempts left: " << attempt << endl;
            } else {
                cout << "Account locked. Too many failed attempts." << endl;
            }
        }
    }
    if (!success) {
        return 0; 
    }    
    do
    {
    show_menu();
    cout << "Enter your choice  ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Your current balance is " << balance;
        break;
     case 2 :
     deposit(balance);
     break;
    case 3 :
     withdraw(balance);
     break;
     case 4:
     chang_pin(correct_pin);
     break;
    case 5 :
    cout << "Thanks for using \n";
    cout << "Exiting...";
    break;

    default:
    cout << "Invalid choice try again";
        break;
    }
    } while (choice != 5);


    return 0;
}