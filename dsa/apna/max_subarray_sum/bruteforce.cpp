#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,arr[200];
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter values: ";
    int max1=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int currentsum=0;
        for(int j=i;j<n;j++)
        {
            currentsum=currentsum+arr[j];
            max1=max(currentsum,max1);
        }
    }
    cout<<"Max sub array sum: "<<max1;
}