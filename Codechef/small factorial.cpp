#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,f=1;
        cin>>a;
        for(int j=1;j<=a;j++)
        {
            f=f*j;
        }
        cout<<f<<endl;
    }
    return 0;
}
