#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
 set<int>s;
 int q;
 cin>>q;
 for(int i=0;i<q;i++)
 {
  int x,y,f=0;
  cin>>y>>x;
  if(y==1)
  {
   s.insert(x);
  }
  if(y==2)
  {
  s.erase(x);
  }
  if(y==3)
  {
    set<int>::iterator it =s.find(x);
       if(*it==x)
       {
           cout<<"yes"<<endl;
           f=1;
       }
       else
        f=0;

    if(f==0)
    cout<<"No"<<endl;
  }

 }
 return 0;

}
