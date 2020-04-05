#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int missingno(vector<int>v,int n)
{
 int i;
 int x1=v[0];
 int x2=1;
 for(i=1;i<n;i++)
   x1=x1^v[i];
   for(i=2;i<=n+1;i++)
   x2=x2^i;
   return (x1^x2);
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
    cin>>v[i];
  int k=missingno(v,n);
 cout<<k;
 return 0;
}
