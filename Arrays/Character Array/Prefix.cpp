#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char n[100];
    cin.getline(n,100);
    //printing all prefix
    for(int i=0;i<strlen(n);i++){
        for(int j=0;j<i+1;j++)
        {
            cout<<n[j];
        }
        cout<<endl;
    }
    //printing all suffix
    cout<<endl;
    for(int i=strlen(n)-1;n[i]!='\0';i--){
        for(int j=i;j>=0;j--)
        {
            cout<<n[j];
        }
        cout<<endl;
    }
    return 0;
}
