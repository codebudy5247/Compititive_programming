#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 cin>>a>>b;
 c=a-b;
 int r=c%10;
 if(r|=9)
 cout<<c+1;
 else
 cout<<c-1;
 return 0;
}
