#include<iostream>
#include<deque>
using namespace std;
void print(deque<int>v){
   for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}
int main()
{
   int n;
   cin>>n;
   deque<int>d(n);
   for(int i=0;i<d.size();i++)
   {
      cin>>d[i];

   }
   print(d);
   d.push_front(10);
   print(d);
   d.push_back(5);
   print(d);
   d.pop_back();
   print(d);

   return 0;
}
