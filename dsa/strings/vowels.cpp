#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    int flag=0;
    cout<<"Enter string: ";
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            cout<<"vowels: "<<str[i]<<endl;
        }
            
    }

}
