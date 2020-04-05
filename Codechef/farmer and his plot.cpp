#include<iostream>
using namespace std;
int main()
{
 int t,r;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n,m,s,p;
  cin>>n>>m;
  if(n==1||m==1)
  cout<<m*n<<endl;
  else if(n<m)
  r=n;
  else
  r=m;
  for(int j=1;j<=r;j++)
  {
    if(n%j==0&&m%j==0)
    s=j;
  }
  p=(n*m)/(s*s);
  cout<<p<<endl;
 }
 return 0;
}
