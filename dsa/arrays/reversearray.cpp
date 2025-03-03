#include<iostream>
#include<algorithm>
using namespace std;

void usingswap(int n, int arr[])
{
    
    int st=0,end=n-1;
    while(st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    cout<<"after changes: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
}

void usingreversefunct(int n, int arr[])
{
    reverse(arr,arr+n);
    cout<<"after changes: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
}

int main()
{
    int arr[200];
    int n;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    usingswap(n,arr);
    usingreversefunct(n,arr);

}