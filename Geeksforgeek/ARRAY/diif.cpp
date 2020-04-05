#include<iostream>
#include<vector>
using namespace std;
void sum(vector<int>v,int n,int m)
{
   int f=0;
   for(int i=0;i<n-1;i++)
   {
      for(int j=i+1;j<n;j++)
      {
         if(v[i]-v[j]==m)
           {
              f=1;
              cout<<v[i]<<v[j]<<endl;
                         }
      }
   }
   if(f==0)
   cout<<"pair not found"<<endl;
}
int main()
{
  int n,m,k;
  cin>>n>>m;
  vector<int>v(n);
  for(int i=0;i<n;i++)
     cin>>v[i];
    sum(v,n,m);
    return 0;
}
