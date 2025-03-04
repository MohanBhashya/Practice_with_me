#include<iostream>
using namespace std;

int main()
{
    int n,arr[200];
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter val: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"now,subarrays are: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}