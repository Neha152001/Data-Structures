#include<iostream>

using namespace std;

int main()
{
    int a[10],n;
    cout<<"Enter number of array elements :";
    cin>>n;
    cout<<"Enter array elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //logic for bubble sort
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    //printing the array
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    return 0;
}
