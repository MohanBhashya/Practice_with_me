#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int count;
    int n,arr[200];
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter val: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        count=1;
        while(i+1<n && arr[i]==arr[i+1])
        {
            count++;
            i++;
        }
        if(count>n/2)
        {
            cout<<"Majority Element i.e more than n/2 : "<<arr[i];
        }
    }


}
