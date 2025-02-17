#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void forloopdup(string s)
{
    for(int i=0;i<s.length();i++)
    {
        int count=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[i]==s[j])
            {
                count++;
            }
        }
        int flag=1;
        for(int k=0;k<i;k++)
        {
            if(s[k]==s[i])
            {
                flag=0;
            }
        }

    if(flag==1)
    {
        cout<<s[i]<<" "<<count<<endl;
    }
    }
}

void sortfunctdup(string s)
{
     sort(s.begin(),s.end());

    for(int i=0;i<s.size();i++)
    {
        int count=1;
        while(i<s.size() && s[i]==s[i+1]  )
        {
            count++;
            i++;
        }  

        if(count>1)
        {
            cout<<s[i]<<" "<<count<<endl;
        }  
    }
}

int main()
{
    
    string s;
    cout<<"enter string: "; 
    cin>>s;
    forloopdup(s);
    cout<<"diff"<<endl;
    cout<<endl;
    sortfunctdup(s);
   
}