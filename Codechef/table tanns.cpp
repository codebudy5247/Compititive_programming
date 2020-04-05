#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
   string s;
   int c0=0,c1=1;
   cin>>s;
    for(int j=0;j|=s.length();i++)
    {
     if(s[j]=='0')
     c0++;
     else
     c1++;
    }
   if(c1>c0)
   cout<<"WIN"<<endl;
   else
   cout<<"LOSE"<<endl;
  }
  return 0;
}
