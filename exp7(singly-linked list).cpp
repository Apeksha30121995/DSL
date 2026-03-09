#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head=NULL;

// Create linked list
void create()
{
    int n,x;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter value: ";
        cin>>x;

        node *newnode=new node;
        newnode->data=x;
        newnode->next=NULL;

        if(head==NULL)
            head=newnode;
        else
        {
            node *temp=head;
            while(temp->next!=NULL)
                temp=temp->next;

            temp->next=newnode;
        }
    }
}

// Insert at beginning
void insertBeg(int x)
{
    node *n=new node;
    n->data=x;
    n->next=head;
    head=n;
}

// Insert at end
void insertEnd(int x)
{
    node *n=new node;
    n->data=x;
    n->next=NULL;

    if(head==NULL)
        head=n;
    else
    {
        node *t=head;
        while(t->next!=NULL)
            t=t->next;
        t->next=n;
    }
}

// Insert at position
void insertMid(int x,int pos)
{
    node *n=new node;
    n->data=x;

    node *t=head;
    for(int i=1;i<pos-1;i++)
        t=t->next;

    n->next=t->next;
    t->next=n;
}

// Display list
void display()
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" -> ";
        t=t->next;
    }
    cout<<"NULL\n";
}

int main()
{
    int ch,x,pos;

    do{
        cout<<"\n1.Create\n2.Insert Beginning\n3.Insert Middle\n4.Insert End\n5.Display\n6.Exit\n";
        cout<<"Enter choice: ";
        cin>>ch;

        switch(ch)
        {
            case 1: create(); break;
            case 2: cin>>x; insertBeg(x); break;
            case 3: cin>>x>>pos; insertMid(x,pos); break;
            case 4: cin>>x; insertEnd(x); break;
            case 5: display(); break;
        }

    }while(ch!=6);
}