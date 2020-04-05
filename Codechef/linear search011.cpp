#include<iostream>
using namespace std;
int main()
{
  int a[50],n,key;
  cout<<"enter size of an array"<<endl;;
  cin>>n;
  cout<<"Enter an array"<<endl;
  for(int i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout<<"enter a element"<<endl;
  cin>>key;
  for(int i=0;i<n;i++)
  {
   if(a[i]==key)
   cout<<"found";
  }
 return 0;
}
