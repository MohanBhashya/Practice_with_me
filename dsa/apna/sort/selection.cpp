#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter elemnts: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++)
    {
        int si=i;
        for(int j=1+i;j<n;j++)
        {
            if(arr[j]<arr[si])
            {
                si=j;
            }
        }
        swap(arr[i],arr[si]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}