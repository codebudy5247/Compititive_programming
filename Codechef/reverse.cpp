#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    long int n;
    cin>>n;
    long int rno=0;
    int l;
    while(n|=0)
    {
      l=n%10;
      rno=rno*10+l;
      n=n/10;
    }
    cout<<rno;
    cout<<endl;
  }
  return 0;
}
