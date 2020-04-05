#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
    int n,temp;
    cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   {
   cin>>a[i];
   }
      for(i=0;i<n;i++)
        {
         for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                 {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                 }
            }
        }
   for(i=0;i<n;i=i+2)
   {
     if(a[i]!=a[i+1])
     cout<<a[i];
     break;
   }
 }
 return 0;
}
