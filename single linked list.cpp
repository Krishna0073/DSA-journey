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

Node* start = nullptr;

// ================= INSERT AT FIRST =================
void insertatfirst(int val) {
    Node* temp = new Node(val);

    temp->next = start;
    start = temp;
}

// ================= INSERT AT END =================
void insertatend(int val) {
    Node* newnode = new Node(val);

    if (start == nullptr) {
        start = newnode;
        return;
    }

    Node* temp = start;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newnode;
}

// ================= INSERT AT POSITION =================
void insertatpos(int k, int val) {

    if (k == 1) {
        insertatfirst(val);
        return;
    }

    Node* newnode = new Node(val);
    Node* temp = start;

    for (int i = 1; i < k - 1; i++) {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

// ================= DELETE AT FIRST =================
void deleteatfirst() {

    if (start == nullptr) {
        return;
    }

    Node* temp = start;

    start = start->next;

    delete temp;
}

// ================= DELETE AT END =================
void deleteatend() {

    if (start == nullptr) {
        return;
    }

    // Only one node
    if (start->next == nullptr) {
        delete start;
        start = nullptr;
        return;
    }

    Node* temp = start;

    // Reach second-last node
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
}

// ================= DELETE AT POSITION =================
void deleteatpos(int k) {

    if (start == nullptr) {
        return;
    }

    // Position 1
    if (k == 1) {
        deleteatfirst();
        return;
    }

    Node* temp = start;

    // Reach node before position k
    for (int i = 1; i < k - 1; i++) {
        temp = temp->next;
    }

    Node* del = temp->next;

    temp->next = del->next;

    delete del;
}

// ================= PRINT =================
void printLL() {

    Node* temp = start;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// ================= MAIN =================
int main() {

    int N;
    cin >> N;

    // Create linked list
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        insertatend(x);
    }

    cout << "Original: ";
    printLL();

    // Insert
    int B, E;
    cin >> B >> E;

    insertatfirst(B);
    insertatend(E);

    cout << "After insertion at first and end: ";
    printLL();

    // Insert at position
    int pos, val;
    cin >> pos >> val;

    insertatpos(pos, val);

    cout << "After insertion at position: ";
    printLL();

    // Delete first
    deleteatfirst();

    cout << "After deleting first: ";
    printLL();

    // Delete end
    deleteatend();

    cout << "After deleting end: ";
    printLL();

    // Delete position
    int delpos;
    cin >> delpos;

    deleteatpos(delpos);

    cout << "After deleting position: ";
    printLL();

    return 0;
}
