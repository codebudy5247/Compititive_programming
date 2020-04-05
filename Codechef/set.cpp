#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
 set<int>s;
 s.insert(40);
 s.insert(30);
 s.insert(60);
 s.insert(20);
 s.insert(50);
 s.insert(50);
 s.insert(10);
 s.insert({1,2,3,4,5,6});
 cout<<s.size();
 for(int num:s)
 {
     if(num==40)
     {
      cout<<num<<' ';
     }
 }
 //cout<<*s.find(60);
 return 0;
}
