#include <iostream>

class List {
private:
    struct Node {
        int data;
        Node* next;
    };
    
    Node* head;

public:
    List() : head(nullptr) {}

    void insertFront(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void deleteFront() {
        if (head == nullptr) {
            std::cout << "List is empty. Unable to delete.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    List myList;

    // Insert elements at the front
    myList.insertFront(5);
    myList.insertFront(10);
    myList.insertFront(15);
    myList.insertFront(20);

    std::cout << "List after insertions: ";
    myList.display();

    // Delete element from the front
    myList.deleteFront();

    std::cout << "List after deletion: ";
    myList.display();

    return 0;
}
