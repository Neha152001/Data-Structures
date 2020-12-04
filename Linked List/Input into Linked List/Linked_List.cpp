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

int main()
{
    //calling parameterized constructor
    node n1(2);
    node n2(10);
    n1.link=&n2;
    cout<<n1.data<< "  "<<n1.link<<endl;
    cout<<n2.data<<"  "<<n2.link<<endl;

    return 0;
}
