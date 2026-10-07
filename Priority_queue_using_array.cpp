#include<iostream>
using namespace std;
#define MAX 5
int pq[MAX];
int size =0;
void insert(int value){
	if(size==MAX){
		cout<<"pq is full"<<endl;
		return;
	}
	int i=size-1;
	while(i>=0&&pq[i]>value){
		pq[i+1]=pq[i];
		i--;
	}
	pq[i+1]=value;
	size++;
}
void deletepq(){
	if(size==0){
		cout<<"Empty"<<endl;
		return;
	}
	size--;
}
void display(){
	for(int i=0;i<size;i++){
		cout<<pq[i]<<" ";
	}
	cout<<endl;
}
int main(){
	insert(55);
	insert(20);
	insert(8);
	insert(39);
	display();
	deletepq();
	display();
}
