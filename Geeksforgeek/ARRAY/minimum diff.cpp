#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int minimumdiff(vector<int>v,int n)
{
 int diff=INT_MAX;
 for(int i=0; i<n-1; i++)
 {
      for (int j=i+1; j<n; j++)
      {
        if(abs(v[i]-v[j])<diff)
        {
         diff=abs(v[i]-v[j]);
        }
      }
   }
   return diff;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
 }
 int k=minimumdiff(v,n);
 cout<<k;
 return 0;
}
