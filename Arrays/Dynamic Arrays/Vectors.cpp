#include<iostream>
//we have to import vector library
#include<vector>

using namespace std;

int main()
{
    //declaring a vector using vector keyword
    //we have to mention the data type of data we are going to store in the vector
    vector<int> v; // static vector allocation
    vector<int> *vp=new vector<int>;//dynamic vector allocation
    //adding elements into vector
    v.push_back(15);
    v.push_back(45);
    v.push_back(89);
    //printing elements of a vector
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    //changing elements entred in the vector
    //we cant insert elements into an array like v[6]=90; this because size of the vector will not increase
    //we have to always use push_back function to insert elements into a vector
    v[1]=67;
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
    //at function used to find the value present at that position
    //at function checks if index is valid or invalid
    cout<<v.at(0)<<endl;
    //printing elements of array using for loop
    // we can use v[i] or v.at(i) because v.size() makes sure we are using proper indexes
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    //pop_back function is used to delete the last element in the vector
    v.pop_back();
    //size gives the number of elements in the vector
    //capacity gives how many max elements we can enter
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    //declaring a vector with a given size
    vector<int> s(100);
    //sort function is used to sort the vector
    sort(v.begin(),v.end());

    return 0;
}
