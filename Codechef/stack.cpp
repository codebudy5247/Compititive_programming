#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>v){
   stack<int>d = v;
   while(d.size()!=0){
        cout<<d.top()<<" ";
        d.pop();
   }
   cout<<endl;
}
int main()
{
    stack<int>s;
    for(int i =0;i<5;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    print(s);
    s.push(5);
    print(s);
    s.pop();
    print(s);
}
