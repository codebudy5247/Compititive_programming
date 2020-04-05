#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  long int no;
  cin>>no;
  int l=no%10;
  while(no>9)
  {
  no=no/10;
  }
  int ans=l+no;
  cout<<ans<<endl;
 }
return 0;
}
