#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void leftrotate(vector<int>&v, int n, int d)
{
  vector<int>b(n);
 for(int i=0;i<d;i++)
 {
   b[i]=v[i];
 }
 v.erase(v.begin(),v.begin()+d);
 int s=v.size();
 for(int i=0;i<b.size();i++)
    v.push_back(b[i]);
    for(int j=0;j<n;j++)
        cout<<v[j];

}

int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
   int n,d;
   cin>>n;
   cin>>d;
   vector<int>v(n);
   for(int i=0;i<v.size();i++)
   {
       cin>>v[i];
   }
   leftrotate(v,n,d);
 }
 return 0;
}
