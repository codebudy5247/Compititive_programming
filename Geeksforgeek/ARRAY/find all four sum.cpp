#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int q,w,e,r;
  int n,x,f=0,m;
  cin>>n>>x;
  vector<int>a(n);
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a.begin(),a.end());
  for(q=0;q<n-3;q++)
  {
   for(w=1;w<n-2;w++)
   {
     for(e=2;e<n-1;e++)
     {
      for(r=3;r<n;r++)
      {
          int p;
           int l=a[q]+a[w]+a[e]+a[r];
       if(l==x&&q<w&&w<e&&e<r)
       {
            p=a[q]<<a[w]<<a[e]<<a[r];
            if(m!=p)
        cout<<a[q]<<a[w]<<a[e]<<a[r]<<"$";
        m=p;
       }
      }
     }
   }
  }
  cout<<endl;
 }
 return 0;
}
