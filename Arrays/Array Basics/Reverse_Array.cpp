#include<iostream>

using namespace std;

int main()
{
     cout<<"Enter number of elements :";
    int n;
    cin>>n;
    int a[n];
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    //instead of using temp variable use in-built function swap
    //i<=j is a very important condition
    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        swap(a[i],a[j]);
    }
    cout<<"Array elements :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
