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

    void push_front(int val)
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

    void reversedisplay()
    {
        Node* prev=NULL;
        Node* current=head;
        Node* next=NULL;

        while(current!=NULL)
        {
            next=current->next;
            current->next=prev;

            prev=current;
            current=next;
        }
        head=prev;
    }


};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    cout<<"Original: "<<endl;
    ll.display();

    ll.reversedisplay();
    cout<<endl<<"Reverse: "<<endl;
    ll.display();
}