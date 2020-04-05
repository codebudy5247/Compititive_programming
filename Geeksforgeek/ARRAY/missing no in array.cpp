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
   vector<int>v(n-1);
   for(int i=0;i<v.size();i++)
   {
    cin>>v[i];
   }
   sort(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
   {
       if(v[0]!=1)
       {
       cout<<"1";
       }
    else if(v[i]+1!=v[i+1])
    {
     cout<<v[i]+1;
     break;
    }
   }
   cout<<endl;
  }
  return 0;
}
