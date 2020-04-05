#include<iostream>
#include<vector>
using namespace std;
int odd(vector<int>v,int n)
{
 int r=0;
 for(int j=0;j<n;j++)
 {
  r=r^v[j];
 }
 return r;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
 cin>>v[i];
 int k=odd(v,n);
 cout<<k;
 return 0;
}
