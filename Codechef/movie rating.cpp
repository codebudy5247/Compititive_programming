#include<iostream>
using namespace std;
int main()
{
  int t,index;
  cin>>t;
  for(int i=0;i<t;i++)
  {
   int n,l[n],r[n],k=0,j;
   cin>>n;
   for(int j=0;j<n;j++)
   {
     cin>>l[n];
   }
   for(int j=0;j<n;j++)
   cin>>r[n];
   for(int j=0;j<n;j++)
   {
     int s=l[n]*r[n];
   if(s>k)
   {
    k=s;
    index=i;
   }
   else if(s==k)
   {
     if(r[i]>r[index])
     index=i;
   }
   }
  cout<<index+1<<endl;
  }
  return 0;
}
