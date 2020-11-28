#include<iostream>

using namespace std;
//trying to give an array as input to a function
int sum(int ar[])
{
    int l=sizeof(ar);
    int sum=0;
    for(int i=0;i<l;i++)    {
      sum+=ar[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter no of elements :";
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    //INT_MIN is like the value of minus(-) infinity
    int m=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
     cout<<"Sum = "<<sum<<endl;
     cout<<"Max = "<<m<<endl;
    return 0;
}

