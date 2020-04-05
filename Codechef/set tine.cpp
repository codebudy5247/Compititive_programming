#include<iostream>
#include<stdlib.h>
#include<set>
using namespace std;
int main()
{
    set<long>s;
for(long j=0;j<100000;j++)
 {
     int y=rand()%50000;
     s.insert(y);
 }
 for(int num:s)
    cout<<num<<"  ";
    cout<<endl;
    cout<<endl;
    cout<<s.size();
    return 0;

}
