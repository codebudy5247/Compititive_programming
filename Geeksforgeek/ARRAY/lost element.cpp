#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int lostelement(vector<int>v,vector<int>b,int n,int x)
{
  if (x != n-1 && n != x-1)
    {
        cout << "Invalid Input";
        return 0;
    }
    int res = 0;
    for (int i=0; i<n; i++)
       res = res^v[i];
    for (int i=0; i<x; i++)
       res = res^b[i];
       return res;
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
 int x;
 cin>>x;
 vector<int>b(x);
 for(int j=0;j<x;j++)
 cin>>b[j];
 int k=lostelement(v,b,n,x);
 cout<<k;
 return 0;
}
