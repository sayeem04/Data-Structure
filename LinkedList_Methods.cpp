#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};
class LinkedList {
    public:
    Node *head ;
    LinkedList() {
        head = nullptr;
    }
    void insert(int value ) {
        Node *newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node *current = head ;
        while (current->next !=nullptr) {
            current = current -> next ;
        }
        current ->next = newNode;
    }
    void display() {
        Node *current = head;
        while (current != nullptr) {
            cout<<current->data<<"  ";
            current = current -> next;
        }
    }
};

int main() {

    LinkedList list =  LinkedList();
    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display();


    return 0;
}