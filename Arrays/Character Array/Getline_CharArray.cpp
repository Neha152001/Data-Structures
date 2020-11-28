#include<iostream>

using namespace std;

int main()
{
    char i[100];
    /*your program is working even if we give 3 characters and
    there is no null at the end but may crash as well  so its better
    the max number of characters you store is n-1 where n is the number of elements.*/
    // cin stops taking input as soon as it encounters a space
    //cin>>i;
    //with cin.getline(string name,length )is used accpet a line as input
    cin.getline(i,100);
    cout<<i;
    return 0;
}
