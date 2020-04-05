#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int nomissing(vector<int>v,int n)
{
 int t,i;
 t=(n+1)*(n+2)/2;
 for(i=0;i<n;i++)
 t=t-v[i];
 return t;
}
int main()
{
  int n;
  cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 cin>>v[i];
 int miss=nomissing(v,n);
  cout<<miss;
  return 0;
}
