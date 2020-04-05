#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }

   int f=0,c=0;


   for(int i=0;i<v.size();  )
   {
        if(v[i]%4==0)
        {
           v.erase(v.begin()+i);
        }
        else if(v.size()==1&&v[i]%4!=0)
        {
            cout<<"-1";
            f++;
            break;
        }
    else
    {
    for(int j=i+1;j<v.size();j++)
    {
        if(v[j]%4==0)
        {
          v.erase(v.begin()+j);
        }

     else if((v[i]+v[j])%4==0)
     {
       c++;
       v.erase(v.begin()+i);
       v.erase(v.begin()+(j-1));
       break;
     }
    }
   }
  }

     if(c>=0&&f==0)
     {
         cout<<endl;
        cout<<c;
     }


 }
 return 0;
}
