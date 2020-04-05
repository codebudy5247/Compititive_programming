#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
   int n,m,x,f=0;
   cin>>n>>m>>x;
   int a[n],b[m];
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<m;i++)
   cin>>b[i];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
        if(a[i]+b[j]==x)
        {
          f++;
         cout<<a[i]<<b[j]<<","<<" ";
         cout<<endl;
        }
      }
   }
   if(f<1)
   cout<<"-1";
 }
 return 0;
}
