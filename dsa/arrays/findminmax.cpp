#include<iostream>
#include<algorithm>
using namespace std;

void usingsortfunct(int n,int arr[])
{

    sort(arr,arr+n);
    cout<<"using sort min "<<arr[0]<<" max "<<arr[n-1]<<endl;
}

void usingmaxfunct(int n,int arr[])
{
    int max1=INT16_MIN,min1=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        max1=max(arr[i],max1);
        min1=min(arr[i],min1);
    }
    cout<<"using maxmin funct min "<<min1<<" max "<<max1<<endl;
}

void usingswap(int n,int arr[])
{
    int max1=INT16_MIN;
    int min1=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
        if(arr[i]<min1)
        {
            min1=arr[i];
        }
    }
    cout<<"Using swap n if Max: "<<max1<<" Min: "<<min1<<endl;
}


int main()
{
    int n,arr[200];
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    usingswap(n,arr);
    usingmaxfunct(n,arr);
    usingsortfunct(n,arr);
}