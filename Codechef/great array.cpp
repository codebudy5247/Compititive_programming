#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int t,c=0;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n,d=1;
  cin>>n;
  vector<int>a(n);
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  for(int i=0;i<n;i++)
  {
    if(a[0]<a[1])
    {
      if((i+2)%2==0)
      {
       if(a[i]>a[i+1])
       {
        swap(a[i],a[n-i+1]);
        c++;
       }
      }
      else{
        if(a[i]<a[i+1])
      {
         swap(a[i],a[n-i+1]);
        c++;
       }
      }
    }
    if(a[0]>a[1])
    {

      if((i+2)%2==0)
    {
        if(a[i]<a[i+1])
        {
        swap(a[i],a[n-i+1]);
        c++;
        }
    }
    else
    {
    if(a[i]>a[i+1])
         {
        swap(a[i],a[n-i+1]);
        c++;
        }

     }
    }
  }
    for(int i=0;i<n;i++)
    {
        if(a[0]<a[1])
        {
            if(i%2==0)
            {
                if(a[i]<a[i+1])
                    d=0;
            }
            else
            if(a[i]>a[i+1])
                d=0;
        }
        else
        {
              if(i%2==0)
            {
                if(a[i]>a[i+1])
                    d=0;
            }
            else
            if(a[i]<a[i+1])
                d=0;
       }
    }

    if(d==0&&c>0)
        cout<<c;
    else
        cout<<"-1";

 }
 return 0;
}
