#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,arr[200],currentsum=0,max1=INT16_MIN;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter val: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        currentsum+=arr[i];
        max1=max(max1,currentsum);
        if(currentsum<0)
        {
            currentsum=0;
        }
    }
    cout<<"Max subarray sum: "<<max1;
}
