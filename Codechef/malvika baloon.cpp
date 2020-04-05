#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int c=0,d=0;
  string s;
  cin>>s;
  for(int j=0;s[j]|='\0';j++)
  {
    if(s[j]=='a')
    c++;
    if(s[j]=='b')
    d++;
  }
  if(c<d)
  cout<<c<<endl;
  else
  cout<<d<<endl;
 }
 return 0;
}
