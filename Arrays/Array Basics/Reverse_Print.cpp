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
    //printing in reverse order
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
