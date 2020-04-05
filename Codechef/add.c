#include<iostream>
using namespace std;
int main()
{
  int t,a,i=0,b,c,d,e;
  int ab[10];
  cin>>t;
  cout<<"\n";
  while(t>0)
  {
    cin>>a>>b;
    while(a>0&&b>0)
    {
      d=a%10;
      e=b%10;
      c=d+e;
      if(c>10)
      {
        c-=10;
      }
      a=a/10;
      b=b/10;
      c=ab[i];
      i++;
    }
    for(int j=a;j>0;j--)
    {
        cout<<a[j];
    }
    t--;
  }
}
