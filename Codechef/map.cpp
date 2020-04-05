#include<iostream>
#include<map>
using namespace std;
int main()
{
 map<string,int>m{{"a",10},{"b",20}};
 for(int num:m)
 {
 cout<<num<<'  ';
 }
 return 0;
}
