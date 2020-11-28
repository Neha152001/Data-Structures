// ALL INBULIT FUNCTIONS
#include<iostream>
#include<cstring>
using namespace std;
//strcpy function mechanism
bool cpy(char a[],char b[])
{
    for(int i=0;i<strlen(b);i++)
    {
        a[i]=b[i];
    }
    if(strcmp(a,b)==0)return true;
    return false;
}
int main()
{
    //strlen function
    char a[100];
    cin.getline(a,100);
    cout<<strlen(a)<<endl;
    //strcmp function used to compare two  strings
    //it gives 0 if the string are equal and a non zero number means the stringa sre not equal
    char b[100];
    cin.getline(b,100);
    cout<<strcmp(b,a)<<endl;
    //strcpy is function used to copy strings
    cout<<a<<endl;
    cout<<b<<endl;
    //calling the inbuilt strcpy function
    //strcpy(a,b);
    // checking if the string is copied
    //cout<<a;
    //using our own strcpy function
    //cout<<cpy(a,b)<<endl;
    //checking if the string is copied after using our strcpy function mechanism
    //cout<<a<<endl;
    //cout<<b<<endl;
    //strncpy is function which copies only first n characters of a string to another string
    //strncpy(a,b,2);
    //cout<<a<<endl;
    //cout<<b<<endl;
    //strcat is a string concatenation function
    //the concatenated is saved in the first string as parameter to strcat function
    strcat(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
