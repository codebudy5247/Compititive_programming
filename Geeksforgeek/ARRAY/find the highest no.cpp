#include<iostream>
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
  int a[n];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  int m=a[0];
  for(int i=1;i<n;i++)
  {
   if(m<a[i])
   swap(m,a[i]);
  }
  cout<<m;
  cout<<endl;
 }
 return 0;
}
