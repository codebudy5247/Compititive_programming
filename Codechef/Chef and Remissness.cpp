#include<iostream>
using namespace std;
int main()
{
    int t;
    int a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
            cout<<a<<" ";
        else
            cout<<b<<" ";
        cout<<a+b<<endl;
    }
    return 0;
}
