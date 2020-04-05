#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n,x;
  cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  int m,f=0,k=0;
  for(int j=0;j<n;j++)
  {
   if(a[j]==x)
   {
     k=1;
    m=j;
    break;
   }
  }
  for(int i=0;i<n;i++)
  {
   if(a[i]==x)
   f++;
  }
  if(k==1)
  cout<<m<<m+f-1;
  else
    cout<<"-1";
  cout<<endl;
 }
 return 0;
}
