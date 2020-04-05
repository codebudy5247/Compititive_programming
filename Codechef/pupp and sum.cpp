#include<iostream>
using namespace std;
int main()
{
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
      int a, b;
      cin >> a >> b;

      for (int j = 0; j < a; j++)
     {
        b = (b * (b + 1)) / 2;
     }

        cout << b << endl;
     }
}
