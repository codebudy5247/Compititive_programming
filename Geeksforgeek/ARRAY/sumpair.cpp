#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int sumpair(vector<int>v,int n,int sum)
{
 int count=0;
for(int i=0;i<n-1;i++)
 {
  for(int j=i+1;j<n;j++)
  {
    if(v[i]+v[j]==sum)
    {
     count++;
    }
  }
 }
 return count;
}
int main()
{
 int n,sum;
 cin>>n>>sum;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 {
  cin>>v[i];
 }
 int k=sumpair(v,n,sum);
 cout<<k;
 return 0;
}
