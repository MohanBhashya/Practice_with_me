#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int st=0;
    int end=s.size()-1;

    while(st<=end)
    {
        swap(s[st],s[end]);
        st++;
        end--;
    }

    cout<<s;
}