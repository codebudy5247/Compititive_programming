#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,temp,ans=-1;
        cin>>n>>x;

        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp==x)
            {
                ans=i;
            }
        }
        if(ans!=-1)
            cout<<ans<<endl;
        else
            cout<<"OOPS! NOT FOUND\n";
    }
    return 0;
}
