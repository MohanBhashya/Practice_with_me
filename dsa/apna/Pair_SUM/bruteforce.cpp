#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum()
{
    int n,x,target;
    vector<int>v;
    vector<int>ans;
    cout<<"enter values in AO: ";
    while (true)    
    {
        cin>>x;
        if(x==-1) break;
        v.push_back(x);
    }
    cout<<"enter target val: ";
    cin>>target;
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int>res = pairsum();
    if(res.empty())
    {
        cout<<"no such pair";
    }
    else
    {
        cout<<"found values at index: "<<res[0]<<" "<<res[1];
    }
}