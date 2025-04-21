#include<iostream>
#include<vector>
using namespace std;

int partition(int arr[],int st,int end)
{
    int index=st-1,pivot=arr[end];
    for(int j=st;j<end;j++)
    {
        if(arr[j]<=pivot)
        {
            index++;
            swap(arr[j],arr[index]);
        }
    }

    index++;
    swap(arr[end],arr[index]);
    return index;
}


void quicksort(int arr[],int st,int end)
{
    if(st<end)
    {
        int pi=partition(arr,st,end);
        quicksort(arr,st,pi-1);
        quicksort(arr,pi+1,end);
    }
  

}

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
    
    quicksort(arr,0,n-1);

   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}