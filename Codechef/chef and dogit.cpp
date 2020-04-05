#include<iostream>
#include<string>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  string str;
   int c0=0,c1=0;
  cin>>str;
  for(int j=0;j<str.size();j++)
  {
    if(str[j]=='1')
    c1++;
    if(str[j]=='0')
    c0++;
  }
  if(c1==1||c0==1)
  cout<<"Yes"<<endl;
  else
  cout<<"No"<<endl;
 }
 return 0;
}
