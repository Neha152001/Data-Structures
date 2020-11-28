//iostream is an library that handles input and output operations 
#include<iostream>

using namespace std;

int main()
{
    int ar[5];
    //Accept input into an array from stdin
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }
    cout<<"Array elements :"<<endl;
    //Print all Array elements
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
