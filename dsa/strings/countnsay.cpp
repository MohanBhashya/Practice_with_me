#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    string currentstring="1";
    string nextterm="";
    if(n==1)
    {
    cout<<"1";
    }
    else{
    int t=n-1;
    while((t)--)
    {
        nextterm="";
        for(int i=0;i<currentstring.size();)
        {
            int currentindex=i;
            while(currentindex < currentstring.size() && currentstring[currentindex]==currentstring[i])
            {
                currentindex++;
            }
            nextterm+=to_string(currentindex-i);
            nextterm+=currentstring[i];
            i=currentindex;
        }
        currentstring = nextterm;
    }
    cout<<currentstring;
    }
}
