#include<iostream>
using namespace std;

int main()
{
    int n,arr[200];
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter vallues(only 0,1,2) : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}