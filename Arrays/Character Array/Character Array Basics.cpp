#include<iostream>

using namespace std;

//creating a function to find length of character array
int length(char in[])
{
    int l=0;
    for(int i=0;i<100;i++)
    {
        if(in[i]=='\0')
            break;
        else
            l++;
    }
    return l;
}
int main()
{
    char name[100];
    cin>>name;
    cout<<"Good moring "<<name<<endl;
    cout<<"Length of character array : "<<length(name)<<endl;
    return 0;
}
