#include<iostream>
#include<string>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
    int f=0;;
    string a[4],b[4];
   for(int i=0;i<4;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<4;i++)
   {
    cin>>b[i];
   }
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++)
    {
     if(a[i]==b[j])
     {
      f++;
     }
    }
   }
   if(f>=2)
   {
    cout<<"similar"<<endl;
   }
   else
   cout<<"dissimilar"<<endl;
 }
 return 0;
}
