#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
 vector<long>v;
 for(long i=0;i<100000;i++)
 {
      int x=rand()%100;
     v.push_back(x);

 }
 for(long i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<v.size();

  return 0;
}
