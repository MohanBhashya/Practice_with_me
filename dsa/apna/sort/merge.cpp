#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int st,int mid,int end)
{
    vector<int>temp;
    int i=st,j=mid+1;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++)
    {
        arr[k+st]=temp[k];
    }
}


void mergesort(int arr[],int st,int end)
{
    int mid;
    if(st<end)
    {
        mid=st+(end-st)/2;
        mergesort(arr,mid+1,end);
        mergesort(arr,st,mid);
        merge(arr,st,mid,end);
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
    
    mergesort(arr,0,n-1);

   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}