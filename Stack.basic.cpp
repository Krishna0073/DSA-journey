#include<iostream>
using namespace std;
#define MAX 5
int stackArr[MAX];
int top=-1;
bool isEmpty(){
	return (top==-1);
}
bool isFull(){
	return (top==MAX-1);
}
void push(int value){
	if(isFull()){
		cout<<"Stack is Full";
		return;
	}
	top=top+1;
	stackArr[top]=value;
	return;
}
void pop(){
	if(isEmpty()){
		cout<<"Stack is Empty";
		return;
	}
	top=top-1;
}
void peek(){
	if(isEmpty()){
		cout<<"Stack is empty";
		return;
	}
	cout<<stackArr[top];
	return;
}
void display(){
	if(isEmpty()){
		cout<<"Stack is Empty";
		return;
	}
	for(int i=top;i>=0;i--){
		cout<<stackArr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	push(10);
	push(20);
	push(30);
	
	push(40);
	display();
	peek();
	cout<<endl;
	pop();
	display();
}
