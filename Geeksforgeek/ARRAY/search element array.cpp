#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  int n;
  cin>>n;
  vector<int>v(n);
  vector<int>:: iterator pos;
  for(int j=0;j<v.size();j++)
  {
    cin>>v[j];
  }
  int key;
  cin>>key;
  cout<<endl;
  pos=find(v.begin(),v.end(),key);
  if(pos !=v.end())
  {
   cout<<distance(v.begin(),pos);
   cout<<endl;
  }
  else
    cout<<"not found"<<endl;
 }
 return 0;
}
