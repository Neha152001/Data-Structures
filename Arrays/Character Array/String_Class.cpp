#include<iostream>
//include vector header file to use vectors
#include<vector>
//use algorithm header file to use sort method
#include<algorithm>

using namespace std;

int main()
{
    string s;
    cin>>s;

    string *sp=new string ;
    *sp=s;
     //out<<sp<<endl;
     //cout<<*sp<<endl;
     //using vectors to store different strings
     vector<string> v;
     v.push_back(s);
     v.push_back("neha");
     v.push_back("firdaus");
     v.push_back("deeksha");
     v.push_back("yashi");
     for(int i=0;i<v.size();i++)
     {
         //
         //we use sort method of algorithm library
         //to sort elements of a vector in alphabetical order
         //we write v[i] instead of v then it will sort each name in alphabetical order eg.neha will become aehn
         sort(v.begin(),v.end());
         cout<<v[i]<<endl;
     }
     //taking input of string from std input
     string name;
     getline(cin, name);
     cout<<"Good moring "+name+" !";
    return 0;
}
