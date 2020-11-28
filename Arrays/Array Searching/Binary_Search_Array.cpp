#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,key=0;
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
    int mid,low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key=v[mid])
        {
             cout<<key<<" found at position "<<mid+1<<endl;
             exit(0);
        }
        else if(key>mid)
            low=mid+1;
        else if(key<mid)
            high=mid-1;
    }
     cout<<"Element not found ";
    return 0;
}


