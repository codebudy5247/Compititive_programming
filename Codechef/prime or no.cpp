#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n;
  int c=0;
  cin>>n;
  for(int j=2;j<sqrt(n);j++)
  {
    if(n%j==0)
    {
    cout<<"no"<<endl;
    break;
    }
    else
    c++;
  }
  if(c>0)
    cout<<"yes"<<endl;
 }
 return 0;
}
