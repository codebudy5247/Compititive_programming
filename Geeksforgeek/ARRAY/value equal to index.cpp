#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n;
  cin>>n;
  int a[n],f=0;
  for(int i=1;i<=n;i++)
  {
   cin>>a[i];
  }
  for(int j=1;j<=n;j++)
  {
   if(a[j]==j)
   {
    f++;
    cout<<j<<" ";
   }
  }
  if(f==0)
  {
   cout<<"Not Found";
  }
 }
 return 0;
}
