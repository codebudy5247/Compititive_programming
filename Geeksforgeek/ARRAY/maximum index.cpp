#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=0,p=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {

               for(int j=n-1;j>i;j--)
               {
                   if(a[j]>=a[i])
                   {
                       int q=j-i;
                       if(q>max)
                       {
                            max=q;
                       }

                       break;
                   }
               }


        }
        cout<<max<<endl;
    }
}
