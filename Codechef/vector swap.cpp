#include<iostream>
#include<vector>
#include<algorithm>
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
 v.push_back(10);
 sort(v.begin(),v.end());
 for(int i=0;i<v.size();i++)
 {
  cout<<v[i]<<"  ";
  }
  return 0;
 }
