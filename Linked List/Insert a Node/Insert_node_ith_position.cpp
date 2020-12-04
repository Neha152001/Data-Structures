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
node* insert_ithnode(node *head)
{
    int data,pos;
    cout<<"Enter data to be inserted :";
    cin>>data;
    cout<<"Enter the position where it needs to be inserted :";
    cin>>pos;
     node *s1=new node(data);
    node *temp=head;
    if(pos<0)
       {
           cout<<"Invalid input "<<endl;
           return head;
       }
    else if(pos>length(head)+1)
    {
        cout<<"Invalid input "<<endl;
           return head;
    }
    if(pos==1){
        s1->link=head;
        head=s1;
        return head;
    }
   if(pos==length(head)+1)
   {
       node *v=head;
       while(temp->link!=NULL)
        temp=temp->link;

       temp->link=s1;
       return head;
   }
    for(int i=1;i<pos-1;i++)
        temp=temp->link;

    s1->link=temp->link;
    temp->link=s1;

    return head;
}
int main()
{
    node *t=input();
     cout<<endl;
     print(t);
     cout<<endl;
    t=insert_ithnode(t);
    cout<<endl;
    print(t);
    return 0;
}
