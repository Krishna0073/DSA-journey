#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
Node* head=nullptr;
void count(){
    Node* temp=head;
    int c=0;
    while(temp!=nullptr){
        c++;
        temp=temp->next;
    }
    cout<<c<<endl;
}
void search(int i){
    int f=0;
    int index=0;
    Node* temp=head;
    while(temp!=0){
     
        if(temp->data==i){
            cout<<"Found at "<<index<<endl;
            f=1;
            break;
        }
        temp= temp->next;
        index++;
    }
    if(f==0){
        cout<<"Not found"<<endl;
    }
}
void findmax(){
    Node* temp=head;
    int max=temp->data;
    while(temp!=nullptr){
        if(max<temp->data){
            max=temp->data;
        }
       temp= temp->next;
    }cout<<"Maximum value "<<max<<endl;
}
void findSum(){
    Node* temp=head;
    int sum=0;
    while(temp!=nullptr){
        sum=sum+temp->data;
        temp=temp->next;
    }
    cout<<"SUM="<<sum<<endl;
}
void insertathead(int i){
    Node* temp=new Node(i);
    temp->next=head;
    head=temp;
}
void insertatend(int i){
    
    Node* temp=head;
    while(temp->next!=nullptr){
       temp= temp->next;
    }Node* newnode=new Node(i);
    temp->next=newnode;
}
void insertatpos(int k,int val){
    Node* temp=head;
    Node* newnode=new Node(val);
    for(int i=0;i<k-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
 
}
void printLL(){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* n1=new Node(10);
    head=n1;
    Node* n2=new Node(20);
    n1->next=n2;
    Node* n3=new Node(30);
    n2->next=n3;
     Node* n4=new Node(40);
    n3->next=n4;
    count();
    int i;
    cin>>i;
    search(i);
    findmax();
    findSum();
    insertathead(90);
 
    insertatend(100);

    insertatpos(2,80);
    printLL();
    return 0;
    
}



