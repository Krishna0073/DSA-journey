#include<iostream>
using namespace std;

struct node
{
int data;
struct node* prev;
struct node* next;
};

class DoublyLinkedList
{
    node* head;
    public:
    DoublyLinkedList()
    {
        head=NULL;
    }
    void insertnode(int data)
    {
        cout<<"Enter Position where u want to insert the node";
        int pos;
        cout<<"Press \n1.Insertion at beginning\n2.Insertion at end\n3.Insertion at any position\n";
        cin>>pos;
        switch (pos)
        {
        case 1:
            {
                insertatbeginning(data);
                break;
            }
        case 2:
            {
                insertatend(data);
                break;
            }
        case 3:
            {
                cout<<"Enter Position";
                int pos;
                cin>>pos;
                insertatpos(data,pos-1);
                break;
            }
        }
    }
    void insertatbeginning(int data)
    {
        node* temp=new node();
        temp->data=data;
        if(head==NULL)
        {
            temp->prev=NULL;
            temp->next=NULL;
            head=temp;
        }
        else
        {
     temp->next=head;
     temp->prev=NULL;
     head->prev=temp;
     head=temp;
        }
    }

    void insertatend(int data)
    {
        if(head==NULL)
        {
            insertatbeginning(data);
            return;
        }
        node *temp=new node;
        temp->data=data;
        node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
        temp->next=NULL;
        temp->prev=ptr;
    }

    void insertatpos(int data,int pos)
    {
        if(pos==0)
        {
            insertatbeginning(data);
            return;
        }
        node *temp=new node;
        temp->data=data;
        node* ptr=head,*pre=NULL;
        for(int i=0;i<pos;i++)
        {
            pre=ptr;
            if(ptr->next==NULL)
            {
                insertatend(data);
                return;
            }
            ptr=ptr->next;
        }
        temp->next=ptr;
        pre->next=temp;
        temp->prev=pre;
        ptr->prev=pre;

    }
    void show()
    {
        cout<<"\nList\n";
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
        cout<<endl;
    }

    void sortaz()
    {
        int count=0;
        node*ptr=head;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
        int n=count,temp;
        for(int i=0;i<n;i++)
        {
            node* curr=head;
            node* succ=head->next;

            for(int j=0;j<n-i-1;j++)
            {
                if(curr->data>succ->data)
                {
                    temp=curr->data;
                    curr->data=succ->data;
                    succ->data=temp;
                }
                curr=curr->next;
                succ=succ->next;
            }
        }
    }
    void sortza()
    {
        int count=0;
        node*ptr=head;
        while(ptr!=NULL)
        {
            ptr=ptr->next;
            count++;
        }
        int n=count,temp;
        for(int i=0;i<n;i++)
        {
            node* curr=head;
            node* succ=head->next;

            for(int j=0;j<n-i-1;j++)
            {
                if(curr->data<succ->data)
                {
                    temp=curr->data;
                    curr->data=succ->data;
                    succ->data=temp;
                }
                curr=curr->next;
                succ=succ->next;
            }
        }
    }



    int searchelement(int data)
    {
        if(head==NULL)
        {
            cout<<"List Empty";
        }
        else
        {
            node* temp=head;
            int count=1;
            while(temp!=NULL)
            {
                if(temp->data==data)
                {
                    cout<<"Data is at position "<<count<<endl;
                    return count;
                }
                count++;
                temp=temp->next;
            }
            cout<<"Not Found";
            return 0;
        }
    }

    void deletenode(int data)
    {
        int loc=searchelement(data);
        if(loc)
        {
            node* ptr=head;
            if(loc==1)
            {
                ptr=ptr->next;
                head=ptr;
                delete ptr->prev;
                ptr->prev=NULL;

            }
            else{
                node* pre=NULL;
                for(int i=0;i<loc-1;i++)
                {
                pre=ptr;
                if(ptr->next==NULL)
                {
                pre->next=NULL;
                delete ptr;
                return;
                }
                ptr=ptr->next;
                }
                pre->next=ptr->next;
                ptr->next->prev=pre;
                delete ptr;

            }
        }
    }

    void reverselist()
    {
        node* ptr=head;
        node* temp;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        head=ptr;
        while(1)
        {
        temp=ptr->prev;
        ptr->prev=ptr->next;
        ptr->next=temp;
        if(ptr->next==NULL)
            break;
        ptr=ptr->next;
        }
    }
};

int main()
{
    DoublyLinkedList obj;
    int d=1;
    while(d)
    {
    cout<<"Enter your choice:\n1.Insert New Node\n2.Search For Node\n3.Sort A to Z\n4.Sort Z to A\n5.Delete a Node\n6.Append value\n7.Reverse\n8.Exit"<<endl;
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1:
            {
                cout<<"Enter data you want to insert";
                int data;
                cin>>data;
                obj.insertnode(data);
                obj.show();
                break;
            }

        case 2:
            {
                cout<<"Enter data you want to search";
                int data;
                cin>>data;
                obj.searchelement(data);
                obj.show();
                break;
            }
        case 3:
            {
                obj.sortaz();
                obj.show();
                break;
            }
        case 4:
            {
                obj.sortza();
                obj.show();
                break;
            }
        case 5:
            {
                cout<<"Enter data you want to delete";
                int data;
                cin>>data;
                obj.deletenode(data);
                obj.show();
                break;

            }
        case 6:
            {
                cout<<"Enter data to be appended";
                int data;
                cin>>data;
                obj.insertatend(data);
                break;
            }
        case 7:
            {
                obj.reverselist();
                obj.show();
                break;
            }
        case 8:
            {
                d=0;
                break;
            }
    }
    }
    return 0;
}

