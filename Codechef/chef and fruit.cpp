#include<iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int l=min(n,m);
        int h=max(n,m);
        int diff=h-l;
        if(diff>k)
        {
            cout<<h-l-k<<endl;
        }
        if(diff<=k)
        {
            cout<<"0"<<endl;
        }
    }
	return 0;
}
