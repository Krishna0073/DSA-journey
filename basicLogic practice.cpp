#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

Node* head = nullptr;

void insertAtEnd(int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void display() {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void countNodes() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }

    cout << "Number of nodes: " << count << endl;
}

void findMax() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    int max = head->data;
    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data > max) {
            max = temp->data;
        }

        temp = temp->next;
    }

    cout << "Maximum: " << max << endl;
}

void countValue(int x) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    int count = 0;
    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data == x) {
            count++;
        }

        temp = temp->next;
    }

    cout << x << " occurs " << count << " times" << endl;
}

void secondLargest() {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;

    int max = head->data;
    int second = 0;
    bool foundSecond = false;

    while (temp != nullptr) {
        if (temp->data > max) {
            second = max;
            max = temp->data;
            foundSecond = true;
        }
        else if (temp->data < max) {
            if (!foundSecond || temp->data > second) {
                second = temp->data;
                foundSecond = true;
            }
        }

        temp = temp->next;
    }

    if (foundSecond) {
        cout << "Second largest: " << second << endl;
    }
    else {
        cout << "No second largest distinct element" << endl;
    }
}

int main() {
    insertAtEnd(10);
    insertAtEnd(50);
    insertAtEnd(20);
    insertAtEnd(80);
    insertAtEnd(40);
    insertAtEnd(10);

    cout << "Linked List: ";
    display();

    countNodes();
    findMax();
    countValue(10);
    secondLargest();

    return 0;
}
