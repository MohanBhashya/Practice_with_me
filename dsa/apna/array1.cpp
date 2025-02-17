#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int arr1[] = {1,1,2,3,3,4};
    int arr2[] = {1,2,3};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr1[i]&arr2[j]==arr2[j])
            {
                cout<<arr1[j];
            }
        }
    }
}