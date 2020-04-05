#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
   int n;
   cin>>n;
   int a[n],b[n];
   for(int i=1;i<=n;i++)
   {
    cin>>a[i];
   }
   for(int i=1;i<=n;i++)
   {
    cin>>b[i];
   }
   int c=0;
   a[0]=0;
   b[0]=0;
   for(int j=0;j<n;j++)
   {
    if(a[j+1]-a[j]>=b[j+1])
    c++;
   }
   cout<<c<<endl;;
 }
 return 0;
}
