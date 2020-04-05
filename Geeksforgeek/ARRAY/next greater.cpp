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
  int m=*max_element(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
   for(int j=1+i;j<v.size();j++)
   {
    if(v[i]<v[j])
    {
     cout<<v[j]<<" ";
     break;
    }

   }
    if(v[i]==v.size()||v[i]==m)
    {
        cout<<"-1";
    }
  }
  cout<<endl;
 }
 return 0;
}
