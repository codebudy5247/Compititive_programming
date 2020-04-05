#include<iostream>
#include<list>
#include<deque>
#include<vector>
using namespace std;
int main()
{
deque<int> coll{1,2,3,4,5,6,7,1,2,3,4,5,6,7};
list<int> subcoll{3,4,5,6};
deque<int>::iterator pos;
pos = search (coll.begin(), coll.end(),subcoll.begin(), subcoll.end());
while (pos != coll.end()) {
cout << "subcoll found starting with element "<< distance(coll.begin(),pos) + 1<< endl;
++pos;
pos = search (pos, coll.end(),subcoll.begin(), subcoll.end());
}
return 0;
}
