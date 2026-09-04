#include <iostream>
using namespace std;

class Node {
public :
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class LinkedList {
public :
    Node *head;

    LinkedList() {
        head = nullptr;
    }

    void display() {
        Node *current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    void traverse() {
        Node *current = head;
        while (current != nullptr) {
            cout << "Node" << current->data << endl;
            current = current->next;
        }
    }

    void insertAtBeginning(int value) {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value) {
        Node *newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node *current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    void insertAfter(int value, int target) {
        Node *current = head;
        while (current != nullptr && current->data != target) {
            current = current->next;
        }
        if (current == nullptr) {
            cout << "Target is not found" << endl;
            return;
        }

        Node *newNode = new Node(value);
        newNode->next = current->next; // A-> B -> C.... A -> B -> X -> C.
        current->next = newNode;
    }

    void deleteFromBeginning() {
        if (head == nullptr) {
            return;
        }
        Node *current = head;
        head = head->next;
        delete current;
    }

    void deleteFromEnd() {
        if (head == nullptr) {
            return;
        }
        if (head->next == nullptr) {
            delete head;
            return;
        }

        Node *current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }

    void deleteValue(int value) {
        if (head == nullptr) {
            return;
        }
        if (head->data == value) {
            Node *temp = head;
            delete temp;
            return;
        }
        Node *current = head;
        while (current->next->next != nullptr && current->next->data != value) {
            current = current->next;
        }
        if (current->next == nullptr) {
            cout << "Value is not found." << endl;
            return;
        }
        Node *temp = current->next;
        current->next = temp->next; // A-> B -> C.... A -> C.
        delete temp;
    }

    bool search(int value) {
        Node *current = head;
        while (current != nullptr) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};


int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.display();

    list.insertAfter(20, 30);

    list.display();

    list.insertAtBeginning(5);

    list.display();
    list.deleteFromBeginning();
    list.display();

    list.deleteFromEnd();
    list.display();

    if (list.search(30)) {

        cout << "Value is found." << endl;
    } else {

        cout << "Value is not found." << endl;
    }
    list.deleteValue(30);
    list.display();
}
