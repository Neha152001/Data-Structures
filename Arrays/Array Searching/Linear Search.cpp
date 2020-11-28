#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,key;
    cout<<"Enter number of elements :";
    cin>>n;
    int v[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<"Enter key element:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==v[i])
        {
             cout<<key<<" found at position "<<i+1<<endl;
             exit(0);
        }
    }
    cout<<"Element not found ";

    return 0;
}

