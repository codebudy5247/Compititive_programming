#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int k,n,c=0,i;
		cin>>n>>k;
		for(i=1;i<=k;i++)
		{
			if(n%i>c)
			c=n%i;
		}
		cout<<c<<endl;
	}
	return 0;
}
