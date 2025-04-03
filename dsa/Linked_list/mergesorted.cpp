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
    public:

    Node* head;
    Node* tail;



    List()
    {
        head=tail=NULL;
    }

    void push_front(int val)
    {
        Node* newnode= new Node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }

    void display()
    {
        Node* temp;
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    Node* mergesort(Node* ll1 , Node* ll2)
    {
        if(ll1 == NULL)
        {
            return ll2;
        }

        else if(ll2 == NULL)
        {
            return ll1;
        }

        else if(ll1->data <= ll2->data)
        {
            ll1->next=mergesort(ll1->next,ll2);
            return ll1;
        }
        else
        {
            ll2->next=mergesort(ll1,ll2->next);
            return ll2;
        }
    } 



};



int main()
{
    List ll1,ll2,ll;
    ll1.push_front(7);
    ll1.push_front(4);
    ll1.push_front(1);

    ll2.push_front(9);
    ll2.push_front(6);
    ll2.push_front(3);

    cout<<"LL1"<<endl;    
    ll1.display();
    cout<<endl<<"LL2"<<endl;
    ll2.display();

    ll.head= ll.mergesort(ll1.head,ll2.head);
    cout<<endl<<"Merge"<<endl;
    ll.display();

}