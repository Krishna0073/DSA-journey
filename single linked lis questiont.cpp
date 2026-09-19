#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next=nullptr;
	Node(int val){
		data=val;
		next=nullptr;
	}
};
Node* start= nullptr;
void insertatend(int val){
	Node* newnode=new Node(val);
	Node* temp=start;
	if(start==nullptr){
		start=newnode;
		return;
	}
	while(temp->next!=nullptr){
		temp=temp->next;
	}
	temp->next=newnode;
}
void deletebyval(int val){
	if(start==nullptr){
		return;
	}
	if(start->data==val){
		Node* temp=start;
		start=start->next;
		delete temp;
		return;
	}
	Node* temp=start;
	while(temp->next!=nullptr){
		if(temp->next->data==val){
			Node* del=temp->next;
			temp->next=del->next;
			delete del;
			return;
		}
		temp=temp->next;
	}
	
}
void deleteatpos(int P) {

    if (start == nullptr) {
        return;
    }

    if (P == 0) {
        Node* temp = start;
        start = start->next;
        delete temp;
        return;
    }

    Node* temp = start;

    for (int i = 0; i < P - 1; i++) {
        temp = temp->next;
    }

    Node* del = temp->next;
    temp->next = del->next;
    delete del;
}

void printLL() {
    Node* temp = start;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        insertatend(x);
    }

    int R;
    cin >> R;

    int P;
    cin >> P;

    deletebyval(R);


    deleteatpos(P);

    printLL();}

