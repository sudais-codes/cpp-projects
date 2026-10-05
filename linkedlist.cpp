#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertAtBeginning(int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = head;

    head = newNode;
}

void insertAtEnd(int value) {
    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void insertAtPosition(int value, int position) {
    if (position == 1) {
        insertAtBeginning(value);
        return;
    }

    Node* newNode = new Node;
    newNode->data = value;

    Node* temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Invalid position" << endl;
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFromBeginning() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;

    head = head->next;

    delete temp;
}

void deleteFromEnd() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = NULL;
}

void deleteFromPosition(int position) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (position == 1) {
        deleteFromBeginning();
        return;
    }

    Node* temp = head;

    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    Node* nodeToDelete = temp->next;

    temp->next = nodeToDelete->next;

    delete nodeToDelete;
}

void search(int value) {
    Node* temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == value) {
            cout << "Value found at position " << position << endl;
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Value not found" << endl;
}

void display() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

int main() {

    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    cout << "Original List: ";
    display();

    insertAtBeginning(5);

    cout << "After inserting 5 at beginning: ";
    display();

    insertAtEnd(40);

    cout << "After inserting 40 at end: ";
    display();

    insertAtPosition(25, 4);

    cout << "After inserting 25 at position 4: ";
    display();

    deleteFromBeginning();

    cout << "After deleting from beginning: ";
    display();

    deleteFromEnd();

    cout << "After deleting from end: ";
    display();

    deleteFromPosition(2);

    cout << "After deleting position 2: ";
    display();

    search(25);

    return 0;
}