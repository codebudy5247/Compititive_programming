#include<iostream>
#include<vector>
using namespace std;
int countoccurance(vector<int>v,int n,int x)
{
 int rev=0;
 for(int i=0;i<n;i++)
 {
  if(x==v[i])
  rev++;
 }
 return rev++;
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
 int k=countoccurance(v,n,x);
 cout<<k;
 return 0;
}
