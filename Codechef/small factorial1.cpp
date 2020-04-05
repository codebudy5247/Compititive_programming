#include <iostream>
using namespace std;
int fac()
{
  int n;
 int fac=1;
 cin>>n;
 if((1<=n)&&(n<=100))
 {
 for(int i=1;i<=n;i++)
 {fac*=i;}
 cout<<fac<<endl;
 }
 return 0;
}

int main() {
int t;
cin>>t;
if((1<=t)&&(t<=100))
{
for(int i=0;i<t;i++) fac();
}
return 0;

}
