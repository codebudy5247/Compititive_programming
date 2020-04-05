#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n,p,f=0;
  cin>>n>>p;
  vector<int>v(n);
  for(int i=0;i<v.size();i++)
  cin>>v[i];
  for(int i=0;i<v.size();i++)
  {
      if(f==0)
    {
    for(int j=1+i;j<v.size();j++)
    {
      if(p==v[i]*v[j])
      {
       cout<<"Yes";
       f=1;
       break;
      }
    }
  }
  }
  if(f==0)
  cout<<"No";
  cout<<endl;
 }
 return 0;
}
