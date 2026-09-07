#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

int main() {

    vector<int> arr = {2, 5, 8, 7};


    Node* head = new Node(arr[0], nullptr);


    Node* second = new Node(arr[1], nullptr);
    Node* third = new Node(arr[2], nullptr);
    Node* fourth = new Node(arr[3], nullptr);


    head->next = second;
    second->next = third;
    third->next = fourth;


    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
