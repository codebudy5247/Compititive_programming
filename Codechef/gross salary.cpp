#include<iostream>
using namespace std;
int main()
{

  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    double b_sal,hra;
    double da;
    cin>>b_sal;
    if(b_sal<1500)
    {
      hra=b_sal*0.1;
      da=b_sal*0.9;
    }
    else
    {
     hra=500;
     da=b_sal*0.98;
    }
   cout<<b_sal+hra+da<<endl;
  }
  return 0;
}
