#include<iostream>
using namespace std;

#define MAX 5

int q[MAX];
int rear=-1;
int front=-1;
void Equeue(int val){
	  if (rear == MAX - 1) {
        cout << "Queue Overflow\n";
        return;
    }
	if(front==-1){
	front=0;
	}	rear++;
	q[rear]=val;
}
void dqueue(){
	if(rear==-1||front>rear){
		cout<<"Queue UnderFlow"<<endl;
		return;
	}
	front++;
}
void Display(){
	if(rear==-1|| front>rear){
		cout<<"Empty";
		return;
	}
	for(int i=front;i<=rear;i++){
		cout<<q[i]<<" ";
	}cout<<endl;
}
int main(){
	Equeue(10);
	Equeue(20);
	Equeue(30);
	Equeue(40);
	Display();
	dqueue();
	Display();
	return 0;
}
