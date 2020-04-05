#include<iostream>
#include<cmath>
using namespace std;
main()
{
int t,p;
cin>>t;
    for(int i=0;i<t;i++)
    {
        int c,a,p;
     cin>>c;
        p=sqrt(1+(8*c));
        a=(p-1)/2;


     cout<<a<<endl;
    }
    return 0;
}
