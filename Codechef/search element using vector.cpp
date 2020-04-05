#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<v.size();i++)
  {
   cin>>v[i];
  }
  for(int j=0;j<v.size();j++)
  {
     if(v[j]==10)
     {
     cout<<"found";
     cout<<endl;
     cout<<j+1;
     }
  }
  return 0;
}
