#include<iostream>
using namespace std;

int main()
{
    long long i,j,m,n,t;
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>m;
        int a[m];
        for(i=0;i<m;i++)
        cin>>a[i];
        cin>>n;
        int b[n];
        for(i=0;i<n;i++)
        cin>>b[i];
        for(i=0;i<m;i++)
        {
            if(a[i]==b[j])
            j++;
            if(j==n)
            break;
        }
        if(j==n)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;

     }
     return 0;
    }
