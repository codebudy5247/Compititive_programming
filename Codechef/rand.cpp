#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,c;
    cin>>n;
 vector<int>a(n);
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 for(int i=0;i<n;i++)
 {
       if(a[i]>a[i+1])
       {
        swap(a[i],a[n-i+1]);
        c++;
        for(int k=0;k<n;k++)
        {
            cout<<a[k]<<"  ";
            cout<<c;
        }

      }
 }

  return 0;
}
