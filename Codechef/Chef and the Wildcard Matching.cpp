#include <iostream>
using namespace std;

int main()
{
	char str[10], str2[10];
	int i,t;
	cin>>t;
	while(t>0)
	{
	cin>>str>>str2;
	for(i=0;str[i]!='\0';i++)
	{
	    if(str[i]=='?'||str2[i]=='?')
	     continue;
	    if(str[i]==str2[i])
	     continue;
	    else
	     break;
	}
	if(str[i]=='\0')
	 cout<<"Yes"<<endl;
	else
	 cout<<"No"<<endl;
	 t--;
	}
	return 0;
}
