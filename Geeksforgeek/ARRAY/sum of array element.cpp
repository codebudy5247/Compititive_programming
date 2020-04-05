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
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<v.size();i++)
  {
   cin>>v[i];
  }
  int s=0;
  for(int j=0;j<v.size();j++)
  {
     s=s+v[j];
  }
  cout<<s<<endl;
 }
 return 0;
}
