#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void optimizedone(int arr[],int n)
{
    sort(arr,arr+n);
    int freq=1;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            freq++;
        }
        else
        {
            freq=1;
        }
        if(freq>n/2)
        {
            cout<<"Majority element: "<<arr[i];
            return;
        }
    }
}


int main()
{
    int n,arr[200];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter value: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    optimizedone(arr,n);
    return 0;
}