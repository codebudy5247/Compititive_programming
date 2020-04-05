#include<iostream>
#include<deque>
using namespace std;
int main()
{
 deque<int>d(5);
 for(int i=0;i<d.size();i++)
 cin>>d[i];
 d.push_back(10);
 d.push_back(20);
 d.pop_front();
 d.pop_back();
 d.push_back(20);
 for(int i=0;i<d.size();i++)
 cout<<d[i]<<"  ";
 return 0;
}
