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
  int k;
  cin>>k;
  vector<int>::iterator it;
  it=find(v.begin(),v.end(),k);
  if(it!=v.end()){
  cout<<distance(v.begin(),it);
  }
  if(it==v.end())
  {
      cout<<"-1";
  }
  cout<<endl;
 }
 return 0;
}
