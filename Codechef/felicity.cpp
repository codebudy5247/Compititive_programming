#include<iostream>
#include<vector>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
     int e;
    vector<char>v(i);
    for(int i=0;i<10;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    for(int j=0;v[j]!='*';j++)
    {
     cout<<v[j];
    }
    cout<<endl;
 }
 return 0;
}

