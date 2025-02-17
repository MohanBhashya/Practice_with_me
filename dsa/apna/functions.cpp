#include<iostream>
#include<math.h>
using namespace std;

void prime(int n)
{
    int flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";    
    }
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    prime(n);
}