#include<iostream>
#include<string>
using namespace std;

void validshuffle(string s1,string s2,string shuffle)
{
    
    if((s1.size()+s2.size()) == shuffle.size() )
    {
        if(shuffle.find(s1) && shuffle.find(s2))
        {
            cout<<"valid";
        }
        else{
            cout<<"not valid";
        }
    }
}

void strictshuffle(string s1,string s2, string shuffle)
{
    int i=0,j=0;
    if(s1.size()+s2.size()==shuffle.size())
    {

        for(int k=0;k<shuffle.size();k++)
        {
  
            if(i<s1.size() && s1[i]==shuffle[k])
            {
                i++;
            }

            if(j<s2.size() && s2[j]==shuffle[k])
            {
                j++;
            }

        }
    }
    else
    {
        cout<<"not valid";
    }   
    if(i==s1.size() && j==s2.size())
    {
        cout<<"valid";
    } 
    else{
        cout<<" not valid";
    }

}

int main()
{
    string s1,s2,shuffle;
    cout<<"enter str1: ";
    getline(cin,s1);
    cout<<"enter str2: ";
    getline(cin,s2);
    cout<<"shuffle word: ";
    getline(cin,shuffle);
    

}