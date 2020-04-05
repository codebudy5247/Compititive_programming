#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
   int a[100],x,n,j,f=0;
   cin>>n>>x;
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(j=0;j<n;j++)
   {
    if(x==a[j])
    {
     cout<<j<<" ";
     for(int k=j+1;k<n;k++){
     if(x!=a[k])
     {
      cout<<k;
      f=1;
      break;
     }
     break;
     }
    }
   }
   if(f==0)
    cout<<"-1";
   cout<<endl;
 }
 return 0;
}
