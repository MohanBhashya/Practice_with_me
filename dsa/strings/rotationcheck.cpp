#include<iostream>
#include<string>
using namespace std;

void byrotaing(string s1,string s2)
{
    int flag=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1==s2)
        {
            flag=1;
        }
        char last=s1.back();
        s1.pop_back();
        s1=last+s1;

    }
    if(flag==1)
    {
        cout<<" its same";
    }
    else{
        cout<<" not same";
    }
}

void usingnposfind(string s1,string s2)
{
     s1=s1+s1;
    if(s1.find(s2)!=string::npos)
    {
        cout<<"its same";
    }
    else{
        cout<<"not same";
    }
}

int main()
{
    string s1,s2;
    cout<<" string 1 : ";
    getline(cin,s1);
    cout<<" string 2 : ";
    getline(cin,s2);

   
   
}