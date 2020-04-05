#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int>v(n),b(n),c(n);
 for(int i=0;i<v.size();i++)
 {
  cin>>v[i];
 }
 for(int i=0;i<b.size();i++)
 {
  cin>>b[i];
 }
 for(int j=0;j<b.size();j++)
 {
  c[j]=v[j]+b[j];
 }
 for(int k=0;k<v.size();k++)
 {
  cout<<c[k]<<" ";
 }
 return 0;
}
