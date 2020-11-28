#include<iostream>

using namespace std;

int  main()
{
    int n[10];
    int num;
    cout<<"Enter the number of array elements :";
    cin>>num;
    cout<<"Enter the array elements :";
    for(int i=0;i<num;i++)
        cin>>n[i];
    //printing the array before sorting
    cout<<"Array elements before sorting \n";
    for(int i=0;i<num;i++)
        cout<<n[i]<<" ";
    cout<<endl;
    //Selection Sort algorithm

    for(int i=0;i<=num-2;i++)
    {
        int min=INT_MAX;
        int pos;
        for(int j=i+1;j<=num-1;j++)
        {
            if(n[j]<min)
               {
                   min=n[j];
                   pos=j;
               }
        }
        if(n[i]>min)
       {
           swap(n[pos],n[i]);
       }

    }
    //printing sorted array
    cout<< "Array after sorting :"<<endl;
     for(int i=0;i<num;i++)
        cout<<n[i]<<" ";
    return 0;
}
