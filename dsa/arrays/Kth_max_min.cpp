#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int usingsort(int n, int arr[],int k)
{
    sort(arr,arr+n);
    return arr[k];
}

int usingvector()
{
    int num,k,x;
    vector<int>v;
    cout<<"enter num for vector: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter k: ";
    cin>>k;
    sort(v.begin(),v.end());
    return v[k];

}

int main()
{
    int n,arr[200],k;
    cout<<"enter n fo array: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter k: ";
    cin>>k;
    cout<<usingsort(n,arr,k);
    cout<<usingvector();
}
