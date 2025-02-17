#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int ans=0;
    int rem=0;
    int num=1010;
    int p=0;
    while(num>0)
    {
        rem=num % 10;
        num=num / 10;
        ans += (rem )* pow(2,p);
        p++;
    }
    cout<<ans;

}