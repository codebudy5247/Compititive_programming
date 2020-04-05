#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> v(5);
 for(int i=0;i<v.size();i++)
    cin>>v[i];
 v.push_back(50);
 v.push_back(520);
 v.erase(v.begin()+2);
 for(int i=0;i<v.size();i++)
    cout<<v[i]<<"  ";

 return 0;

}
