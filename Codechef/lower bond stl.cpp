#include<iostream>
using namespace std;
int main()
{
 int n,u=0;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 cin>>a[i];
 int q;
 cin>>q;
 for(int i=0;i<q;i++)
 {
 int s;
 cin>>s;
 for(int i=u;i<n;i++)
 {
  if(s==a[i])
  {
  cout<<"Yes"<<" "<<i+1;
  break;
  }
  else if(s<a[i])
  {
      cout<<"No"<<" "<<i+1;
      break;
  }
  }
 cout<<endl;
 }
 return 0;
}
