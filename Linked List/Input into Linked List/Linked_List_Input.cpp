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
//function to print elements of a linked list
 void print(node *head)
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"\t";
            temp=temp->link;
        }
    }
//function to insert at tail
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
//function to insert at head
node* inputhead()
{
    int data;
    cout<<"\n Enter data element of the node :";
   cin>>data;
   node *head = NULL;
   node *tail = NULL;
   //-1 is the breaking condition of the loop
   while(data != -1){

    node *n = new node(data);

    if(head == NULL){
        head = n;
        tail = n;
    }else {
        n -> link = head;   /// Inserting at head
        head = n;
    }
    cout<<"\n Enter data element of the node :";
    cin>>data;
   }
   return head;

}
int main()
{
    node *temp=input();
    node *t=inputhead();
    //printing linked list in two different ways
    cout<<endl;
    print(temp);
    cout<<endl;
    print(t);

    return 0;
}
