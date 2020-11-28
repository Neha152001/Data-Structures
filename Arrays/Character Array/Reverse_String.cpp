#include<iostream>

using namespace std;

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

char str[100];
cin.getline(str,100);
cout<<str<<endl;
//int l=length(str)-1;
for(int s=0,e=length(str)-1;s<e;e--,s++)
{
    swap(str[s],str[e]);
}
cout<<str<<endl;
return 0;
}
