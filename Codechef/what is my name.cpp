#include<iostream>
#include<string>
#include<ctype.h>
#include<limits>
using namespace std;
int main()
{
  string s;
 int t,j;
 cin>>t;
 for(int i=0;i<=t;++i)
 {
   string s;
   getline(cin,s);
    do
    {
         (toupper(s[j]));
           j++;
    }while(j==0||s[j]=' ')

   cout<<s<<endl;
 }
 return 0;
}
