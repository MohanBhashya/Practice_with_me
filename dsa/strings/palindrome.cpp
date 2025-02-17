#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void whilepalin(string s)
{
    int flag=0;
    int st=0;
    int end=s.size()-1;

    while(st<end)
    {
        if(s[st]!=s[end])
        {
            flag=1;
        }
        
        st++;
        end--;
    }
    if(flag==1)
    {
        cout<<s<<" not palindrome";
    }
    else
        {
            cout<<s<<" palindrome";
        }
    
} 

void reversefuct(string s)
{
    string t =s;
    reverse(s.rbegin(),s.rend());
    if(s==t)
    {
        cout<<s<<" palindrome";
    }
    else{
        cout<<s<<" not palindrome";
    }
}

int main()
{
    string s;
    getline(cin,s);
    whilepalin(s);
    cout<<endl<<"diff"<<endl;
    reversefuct(s);   
}