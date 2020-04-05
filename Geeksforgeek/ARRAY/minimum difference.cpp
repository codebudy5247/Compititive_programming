#include<iostream>
#include<algorithm>
using namespace std;
int mindiff(int a[],int n)
{
  sort(a,a+n);
  int diff=INT_MAX;
  for(int i=0;i<n;i++)
  {
   if(a[i+1]-a[i]<diff)
   diff=a[i+1]-a[i];
  }
  return diff;
}
int main()
{
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
int k=mindiff(a,n);
 cout<<k;
 return 0;
}
