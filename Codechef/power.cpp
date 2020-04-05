#include<iostream>
using namespace std;
int main()
{
 int n,p,i,e=1;
 cout<<"enter a number";
 cin>>n;
 cout<<"enter power";
 cin>>p;
 for(i=0;i<p;i++)
 {
   e=e*n;
 }
 cout<<e;
 return 0;
}
