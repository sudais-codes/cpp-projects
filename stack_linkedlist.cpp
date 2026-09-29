#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push
    void push(int value) {
        Node* newNode = new Node;

        newNode->data = value;
        newNode->next = top;

        top = newNode;
    }

    // Pop
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow!" << endl;
            return;
        }

        Node* temp = top;
        top = top->next;

        delete temp;
    }

    // Peek
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return -1;
        }

        return top->data;
    }

    // Display
    void display() {
        Node* temp = top;

        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Stack: ";
    s.display();

    cout << "Top: " << s.peek() << endl;

    s.pop();

    cout << "After Pop: ";
    s.display();

    return 0;
}