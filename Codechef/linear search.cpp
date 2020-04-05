#include<iostream>
using namespace std;
int main()
{
 int a[10],key,i;
 for(i=0;i<10;i++)
 {
  cin>>a[i];
 }
 cin>>key;
 for(i=0;i<10;i++)
 {
  if(a[i]==key)
  cout<<"found"<<i+1;
 }
 return 0;
}
