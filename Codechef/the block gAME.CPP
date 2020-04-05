#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
  int n,m,r,d=0;
  cin>>n;
  m=n;
  while(n>0)
  {
   r=n%10;
   d=d*10+r;
   n=n/10;
  }
  if(d==m)
  cout<<"wins"<<endl;
  else
  cout<<"losses"<<endl;
  }
}
