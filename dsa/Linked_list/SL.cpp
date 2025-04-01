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

    void push_back(int val)
    {
        Node* newnode=new Node(val);
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

    void pop_front()
    {
        if(head==NULL)
        {
            return;
        }
        else
        {
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
    }

    void pop_back()
    {
        if(head==NULL)
        {
            return;
        }
        else
        {
            Node* temp=head;
            while(temp->next!=tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete tail;
            tail=temp;
        }
    }

    void insert(int val,int pos)
    {
        if(pos<0)
        {
            cout<<"Invalid at "<<pos;
            return;
        }
        else if(pos==0)
        {
            push_front(val);
        }
        else
        {
            Node* temp=head;
            for(int i=0;i<pos-1;i++)
            {
                if(temp==NULL)
                {
                    return;
                }
                temp=temp->next;
            }
            Node* newnode=new Node(val);
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }

    int search(int key)
    {
        Node* temp=head;
        int pos=0;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
                cout<<pos;
                return pos;
            }
            temp=temp->next;
            pos++;
        }
        return -1;
    }

};



int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.pop_back();

    ll.push_back(5);

    ll.pop_front();

    ll.insert(7,2);
    
    ll.display();

    ll.search(1);
}