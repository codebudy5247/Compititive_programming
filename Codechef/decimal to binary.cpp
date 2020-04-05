#include<iostream>
using namespace std;
int main()
{
 int j,num,a[30],i=0;
cin>>num;
 while(num>0)
 {
  if(num%2==0)
  a[i]=0;
  else
    a[i]=1;
  i++;
  num=num/2;
 }
 for(j=i;j>=0;j--)
 {
  cout<<a[j];
 }
 return 0;

}
