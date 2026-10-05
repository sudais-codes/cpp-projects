#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void display(Node* head)
{
    if (head == nullptr)
    {
        cout << "List is empty\n";
        return;
    }

    Node* current = head;

    do
    {
        cout << current->data << " ";
        current = current->next;

    } while (current != head);

    cout << endl;
}

void insertBeginning(Node*& head, int value)
{
    Node* newNode = new Node;
    newNode->data = value;

    if (head == nullptr)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* last = head;

    while (last->next != head)
    {
        last = last->next;
    }

    newNode->next = head;
    last->next = newNode;
    head = newNode;
}

void insertEnd(Node*& head, int value)
{
    Node* newNode = new Node;
    newNode->data = value;

    if (head == nullptr)
    {
        newNode->next = newNode;
        head = newNode;
        return;
    }

    Node* last = head;

    while (last->next != head)
    {
        last = last->next;
    }

    newNode->next = head;
    last->next = newNode;
}

void insertAtPosition(Node*& head, int value, int position)
{
    if (position < 1)
    {
        cout << "Invalid position\n";
        return;
    }

    if (position == 1)
    {
        insertBeginning(head, value);
        return;
    }

    if (head == nullptr)
    {
        cout << "Invalid position\n";
        return;
    }

    Node* current = head;

    for (int i = 1; i < position - 1; i++)
    {
        current = current->next;

        if (current == head)
        {
            cout << "Invalid position\n";
            return;
        }
    }

    Node* newNode = new Node;

    newNode->data = value;
    newNode->next = current->next;
    current->next = newNode;
}

int main()
{
    Node* head = nullptr;

    // Insert at beginning
    insertBeginning(head, 20);
    insertBeginning(head, 10);

    // Insert at end
    insertEnd(head, 30);
    insertEnd(head, 40);

    cout << "After beginning/end insertion: ";
    display(head);

    // Insert 25 at position 3
    insertAtPosition(head, 25, 3);

    cout << "After inserting 25 at position 3: ";
    display(head);

    return 0;
}