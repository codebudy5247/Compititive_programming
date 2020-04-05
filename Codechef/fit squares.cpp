#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
       int b;
       cin>>b;
       if(b%2==0)
       b=b/2-1;
       else
       b=(b-3)/2;
       cout<<b*(b+1)/2<<endl;

    }

   return 0;
}
