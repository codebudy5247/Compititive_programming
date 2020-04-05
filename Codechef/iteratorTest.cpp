#include<iostream>
#include<algorithm>
#include<list>
#include<set>
#include<iterator>
using namespace std;
int main(){
    int k=-1;
    set<int>v({5,2,4,8,3,1,9 });
    set<int>::iterator it = v.begin();
    for(;it!=v.end();it++){
            k++;
       if(*it==9)
       {
           cout<<"yes";
           cout<<k;
           break;
       }
        }
        return 0;
    }

