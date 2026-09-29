#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// THE WHOLE ALGORITHM HOW THE PARSING EXPRESION WORK 
// WRITTEN BY SUDAIS .

class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(int value) {
        if (top == 99) {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++top] = value;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return 0;
        }

        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            return 0;
        }

        return arr[top];
    }
};

class CharStack {
private:
    char arr[100];
    int top;

public:
    CharStack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char value) {
        if (top == 99) {
            return;
        }

        arr[++top] = value;
    }

    char pop() {
        if (isEmpty()) {
            return '\0';
        }

        return arr[top--];
    }

    char peek() {
        if (isEmpty()) {
            return '\0';
        }

        return arr[top];
    }
};

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' ||
           ch == '/' || ch == '%';
}

int precedence(char ch) {
    if (ch == '+' || ch == '-')
        return 1;

    if (ch == '*' || ch == '/' || ch == '%')
        return 2;

    return 0;
}

string infixToPostfix(string infix) {
    CharStack operators;
    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {

        if (infix[i] == ' ')
            continue;

        if (isdigit(infix[i])) {
            while (i < infix.length() && isdigit(infix[i])) {
                postfix += infix[i];
                i++;
            }

            postfix += ' ';
            i--;
        }

        else if (infix[i] == '(') {
            operators.push(infix[i]);
        }

        else if (infix[i] == ')') {

            while (!operators.isEmpty() && operators.peek() != '(') {
                postfix += operators.pop();
                postfix += ' ';
            }

            if (!operators.isEmpty())
                operators.pop();
        }

        else if (isOperator(infix[i])) {

            while (!operators.isEmpty() &&
                   operators.peek() != '(' &&
                   precedence(operators.peek()) >= precedence(infix[i])) {

                postfix += operators.pop();
                postfix += ' ';
            }

            operators.push(infix[i]);
        }
    }

    while (!operators.isEmpty()) {
        postfix += operators.pop();
        postfix += ' ';
    }

    return postfix;
}

int evaluatePostfix(string postfix) {
    Stack values;

    for (int i = 0; i < postfix.length(); i++) {

        if (postfix[i] == ' ')
            continue;

        if (isdigit(postfix[i])) {

            int number = 0;

            while (i < postfix.length() && isdigit(postfix[i])) {
                number = number * 10 + (postfix[i] - '0');
                i++;
            }

            values.push(number);
            i--;
        }

        else if (isOperator(postfix[i])) {

            int right = values.pop();
            int left = values.pop();

            int result;

            if (postfix[i] == '+')
                result = left + right;

            else if (postfix[i] == '-')
                result = left - right;

            else if (postfix[i] == '*')
                result = left * right;

            else if (postfix[i] == '/')
                result = left / right;

            else
                result = left % right;

            values.push(result);
        }
    }

    return values.pop();
}

int main() {

    string infix;

    cout << "Enter expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);

    cout << "\nInfix:   " << infix;
    cout << "\nPostfix: " << postfix;
    cout << "\nResult:  " << evaluatePostfix(postfix) << endl;

    return 0;
}