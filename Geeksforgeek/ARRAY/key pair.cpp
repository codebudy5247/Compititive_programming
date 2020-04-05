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
  int n,x,f=0;
  cin>>n>>x;
  vector<int>v(n);
  for(int i=0;i<v.size();i++)
  {
  cin>>v[i];
  }
  sort(v.begin(),v.end());
  for(int j=0;j<v.size();j++)
  {
   for(int k=1+j;k<v.size();k++)
   {
       if(f==0)
       {
         if(v[j]+v[k]==x)
          {
           cout<<"Yes";
            f=1;
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
