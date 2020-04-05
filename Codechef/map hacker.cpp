#include<iostream>
#include<map>
#include<stdio.h>
#include<iterator>
using namespace std;
int main()
{
 map<string,int>m;
 int q;
 cin>>q;
 for(int i=0;i<q;i++)
 {
  int type,y;
  char x[50];
  cin>>type;
  gets(x);
  cin>>y;
   if(type==1)
  {
   m.insert(make_pair("x",y));
  }
  if(type==2)
  {
   for(map<string,int>::iterator it = m.begin(); it != m.end(); it++)
  {
	if((it->first) == "x")
	{
		m.erase(it);
		break;
    }
  }
  }
  if(type==3)
  {
    map<string,int>::iterator it =m.find("x");
           cout<<it->second<<endl;
  }

 return 0;
 }
}
