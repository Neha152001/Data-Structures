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

int main()
{
    //Creating nodes statically
    node n1(8);
    node n2(15);
    node n3(21);
    node n4(29);
    node n5(9);

    //creating a head pointer
    node *head=&n1;

    //creating a link between the nodes
    n1.link=&n2;
    n2.link=&n3;
    n3.link=&n4;
    n4.link=&n5;

    //creating a print function
    print(head);

    return 0;
}
