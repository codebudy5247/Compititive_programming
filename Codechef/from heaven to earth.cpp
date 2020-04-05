#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
   float n,v1,v2;
   cin>>n>>v1>>v2;
   float t2=(2*n)/v2;
   float t1=(sqrt(2))*n/v1;
   if(t1<t2)
   cout<<"Stairs"<<endl;
   else
   cout<<"Elevator"<<endl;
  }
  return 0;
}
