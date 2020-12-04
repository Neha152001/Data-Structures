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
void length(node *head)
{
    node *temp=head;
    int count=0;
    while(temp!=NULL)
       {
            count++;
            temp=temp->link;
       }
    cout<<"Length of Linked List is :"<<count<<endl;
}
int main()
{
    node *temp=input();
    print(temp);
    cout<<endl;
    length(temp);
    return 0;
}
