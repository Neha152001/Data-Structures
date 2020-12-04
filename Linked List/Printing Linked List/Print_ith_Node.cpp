#include<bits/stdc++.h>
using namespace std;

class node {
     public :
           int data;
           node  *link;
           node(int n){
               data=n;
               link=NULL;
           }
};
//function to take input
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
//function to print linked list elements
void print(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->link;
    }
}
//function to print a certain node of the linked list
void print_node(node *head)
{
    node *temp=head;
    int pos;
    cout<<endl;
    cout<<"Enter position:";
    cin>>pos;
    for(int i=1;i<pos;i++)
        temp=temp->link;
    cout<<"Data at "<<pos<<" position is "<<temp->data;
}
int main()
{
    node *temp=input();
    print(temp);
    print_node(temp);
    return 0;
}
