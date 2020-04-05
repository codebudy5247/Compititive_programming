#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    int l,r,m,rev=0,rem,s=0;
    cin>>l>>r;
    for(int j=l;j<=r;j++)
    {
       m=j;
       rev=0;
      while(m>0)
      {
          rem=m%10;
          rev=rev*10+rem;
          m=m/10;
      }
      if(j==rev)
      {
           s=s+j;
      }
    }
   cout<<s<<endl;
  }
  return 0;
}
