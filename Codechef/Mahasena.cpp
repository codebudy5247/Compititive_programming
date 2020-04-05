#include<iostream>
using namespace std;
int main()
{

 int n,w,e=0,o=0;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cin>>w;
  if(w%2==0)
  {
   e++;
  }
  else
  {
  o++;
  }
 }
 if(e>o)
 cout<<"READY FOR BATTLE";
 else
 cout<<"NOT READY";
 return 0;

}
