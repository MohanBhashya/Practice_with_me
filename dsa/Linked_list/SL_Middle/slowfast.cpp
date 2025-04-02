#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

class List
{
    Node* head;
    Node* tail;

    public:
    List()
    {
        head=tail=NULL;
    }

    void pushfront(int val)
    {
        Node* newnode = new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
    }

    void pushback(int val)
    {
        Node* newnode = new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }

    void display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    int Middle()                       
    {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;           
    }

};

int main()
{
    List ll;
    ll.pushfront(3);
    ll.pushfront(2);
    ll.pushfront(1);
    ll.pushback(4);
    ll.pushback(5);
    ll.display();
    cout<<ll.Middle();               
}