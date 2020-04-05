#include<iostream>
#include<vector>
using namespace std;
int oddoccurance(vector<int>v,int n)
{
  for(int i=0;i<n;i++)
  {
    int count=0;
    for(int j=0;j<n;j++)
    {
     if(v[i]==v[j])
     count++;
    }
    if(count%2!=0)
    return v[i];
  }
  return -1;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)
    cin>>v[i];
int k=oddoccurance(v,n);
 cout<<k;
 return 0;
}
