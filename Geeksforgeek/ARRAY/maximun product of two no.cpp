#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n,m=0;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=1+i;j<n;j++)
    {
        int v=a[i]*a[j];
       if(v>m)
      swap(m,v);
    }
  }
  cout<<m;
  cout<<endl;
 }
 return 0;
}
