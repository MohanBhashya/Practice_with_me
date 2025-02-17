#include<iostream>
using namespace std;

int main()
{
   int n=4;
   int k=4;
   int q=4;
   int l=1;
   int s=1;
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<i+1;j++)
        {
               cout<<"*";
        }
        if(i!=3)
        {
               for(int t=0;t<2*(n-l);t++)
               {
                    cout<<" ";
               }
        }
        l++;
        for(int v=0;v<i+1;v++)
        {
               cout<<"*";
        }
        cout<<endl;
   }
   for(int i=0;i<n;i++)
   {
        for(int j=k;j>0;j--)
        {
            cout<<"*";
        }
        k--;
        
        if(i!=0)
        {
               for(int t=0;t<2*s-2;t++)
               {
                    cout<<" ";
               }
        }
        s++;
        
        for(int v=q;v>0;v--)
        {
               cout<<"*";
        }
        q--;
        cout<<endl;
     }
}
        
