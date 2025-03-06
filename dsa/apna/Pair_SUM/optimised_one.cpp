#include<iostream>
#include<vector>
using namespace std;

vector<int>Pairsum(vector<int>v,int target)
{
    vector<int>ans;
    int st=0,end=v.size()-1;
    while(st<end)
    {
        int pairsm=v[st]+v[end];
        if(pairsm<target)
        {
            st++;
        }
        else if(pairsm>target)
        {
            end--;
        }
        else
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
} 

int main()
{
    vector<int>v,res;
    int n,x,target;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter val in AO: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"enter target: ";
    cin>>target;
    res= Pairsum(v,target);
    if(res.empty())
    {
        cout<<"no such pair";
    }
    else
    {
        cout<<"Pairsum val: "<<res[0]<<" "<<res[1];
    }
}