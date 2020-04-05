#include<iostream>
using namespace std;
int main()
{
  	int t,index;
	cin>>t;
	while(t--)
	{int n,k=0;
	cin>>n;
	int l[n],r[n];
	for(int i=0;i<n;i++)
	cin>>l[i];
	for(int i=0;i<n;i++)
	cin>>r[i];
	for(int i=0;i<n;i++)
	{int s=l[i]*r[i];
	if(s>k)
	{k=s;
	index=i;
	}
	else if(s==k)
	{if(r[i]>r[index])
	index=i;
	}
	}
	cout<<index+1<<"\n";
	}
	return 0;
}
