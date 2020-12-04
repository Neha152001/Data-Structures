#include<bits/stdc++.h>
using namespace std;

class node{
   public:
       int data;
       node *link;
    node(int n)
    {
        data=n;
        link=NULL;
    }

};

//Prints all the elements in the Linked List
 void print(node *head)
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->link;
        }
    }
node* input()
{
    int data;
    cout<<"\n Enter data element of the node :";
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    //-1 is the breaking condition of the loop
    while(data!=-1)
    {
        node *n=new node(data);

        if(head==NULL)
        {
            head=n;
            tail=n;
        }
        else{
            tail->link=n;
            tail=n;
        }
        cout<<"\n Enter data element of the node :";
        cin>>data;
    }
    return head;
}
int length(node *head)
{
    node *temp=head;
    int count=0;
    while(temp!=NULL)
       {
            count++;
            temp=temp->link;
       }
    return count;
}

node* delete_ith_node(node* head)
{
    int pos;
    cout<<endl;
    cout<<"Enter position :";
    cin>>pos;
    if(pos<0)
    {
        cout<<"Invalid Input ";
        return head;
    }
    else if(pos>length(head))
    {
        cout<<"Invalid Input";
        return head;
    }

    if(pos==1)
    {
        node *t;
        t=head;
        head=head->link;
        delete t;
        return head;
    }
    else if(pos==length(head)-1)
    {
        node *temp=head;
        node *t;
        while(temp->link->link!=NULL)
            temp=temp->link;

            t=temp->link;
        temp->link=NULL;
        delete t;
        return head;
    }
    else{
        node *t=head;
        node *temp;
        for(int i=1;i<pos-1;i++)
            t=t->link;
            temp=t->link;
        t->link=t->link->link;
        delete temp;
        return head;
    }
}

int main()
{
    node *temp=input();
    cout<<endl;
    print(temp);
    cout<<endl;
    temp=delete_ith_node(temp);
    cout<<endl;
    print(temp);
    return 0;
}
