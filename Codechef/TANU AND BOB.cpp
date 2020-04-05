#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
	int t,n,i,l,f;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>n;
	char name[n];
	cin>>name;
	f=0;
	l=strlen(name);
	for(i=0;i<l;i++)
	{
		if(name[i]=='Y')
		{
			cout<<"NOT INDIAN"<<endl;
			f=1;
			break;
		}
		else if(name[i]=='I')
		{
			cout<<"INDIAN"<<endl;
			f=1;
			break;
		}
	}
	if(f==0)
	cout<<"NOT SURE"<<endl;
	}
	return 0;
}
