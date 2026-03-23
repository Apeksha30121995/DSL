#include<iostream>
using namespace std;

struct node
{
    int data;
    node *prev,*next;
};

node *head=NULL;

// Create
void create()
{
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        node *n1=new node;
        n1->data=x;
        n1->prev=n1->next=NULL;

        if(head==NULL)
            head=n1;
        else
        {
            node *t=head;
            while(t->next!=NULL)
                t=t->next;

            t->next=n1;
            n1->prev=t;
        }
    }
}

// Insert Beginning
void insertBeg(int x)
{
    node *n1=new node;
    n1->data=x;
    n1->prev=NULL;
    n1->next=head;

    if(head!=NULL)
        head->prev=n1;

    head=n1;
}

// Insert End
void insertEnd(int x)
{
    node *n1=new node;
    n1->data=x;
    n1->next=NULL;

    if(head==NULL)
    {
        n1->prev=NULL;
        head=n1;
    }
    else
    {
        node *t=head;
        while(t->next!=NULL)
            t=t->next;

        t->next=n1;
        n1->prev=t;
    }
}

// Insert Middle
void insertMid(int x,int pos)
{
    node *t=head;

    for(int i=1;i<pos-1;i++)
        t=t->next;

    node *n1=new node;
    n1->data=x;

    n1->next=t->next;
    n1->prev=t;

    if(t->next!=NULL)
        t->next->prev=n1;

    t->next=n1;
}

// Delete Beginning
void deleteBeg()
{
    if(head==NULL) return;

    node *t=head;
    head=head->next;

    if(head!=NULL)
        head->prev=NULL;

    delete t;
}

// Delete End
void deleteEnd()
{
    if(head==NULL) return;

    node *t=head;

    while(t->next!=NULL)
        t=t->next;

    if(t->prev!=NULL)
        t->prev->next=NULL;
    else
        head=NULL;

    delete t;
}

// Delete Middle (position)
void deleteMid(int pos)
{
    node *t=head;

    for(int i=1;i<pos;i++)
        t=t->next;

    if(t->prev!=NULL)
        t->prev->next=t->next;

    if(t->next!=NULL)
        t->next->prev=t->prev;

    delete t;
}

// Display
void display()
{
    node *t=head;
    while(t!=NULL)
    {
        cout<<t->data<<" <-> ";
        t=t->next;
    }
    cout<<"NULL\n";
}

int main()
{
    int ch,x,pos;

    do{
        cout<<"\n1.Create \n 2.InsBeg \n 3.InsMid \n 4.InsEnd  \n 5.DelBeg \n 6.DelMid \n7.DelEnd \n 8.Display \n 9.Exit\n";
        cin>>ch;

        switch(ch)
        {
            case 1: create(); break;
            case 2: cin>>x; insertBeg(x); break;
            case 3: cin>>x>>pos; insertMid(x,pos); break;
            case 4: cin>>x; insertEnd(x); break;
            case 5: deleteBeg(); break;
            case 6: cin>>pos; deleteMid(pos); break;
            case 7: deleteEnd(); break;
            case 8: display(); break;
        }

    }while(ch!=9);
}