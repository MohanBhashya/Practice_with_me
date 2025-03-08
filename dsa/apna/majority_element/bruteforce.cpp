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
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            cout<<"Majority Element : "<<arr[i];
            return 0;
        } 
    }
    cout<<"NO element";
    return 0;
}
