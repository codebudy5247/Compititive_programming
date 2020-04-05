#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int a,b,c;
 float d,r1,r2;
 cout<<"enter three no";
 cin>>a>>b>>c;
 d=pow(((b*b)-(4*a*c)),0.5);
 r1=-(b+d)/(2*a);
 r2=-(b-d)/(2*a);
 cout<<r1<<endl<<r2;
 return 0;

}
