#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n;
  cin>>n;
  int a[n];
  for(int j=0;j<n;j++)
  {
   cin>>a[j];
  }
  int unc;
  cin>>unc;
  int s=a[unc-1];
  sort(a,a+n);
  for(int i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            cout<<i+1<<"\n";
            break;
        }
    }

 }
 return 0;
}
