#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
   long int a;
   cin>>a;
   int count=0;
   while(a>0)
   {
    if(a%10==4)
    {
     count++;
    }
    a=a/10;
   }
   cout<<count<<endl;
 }
 return 0;
}
