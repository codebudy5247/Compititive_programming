#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
   int n, max, num, c;

   cin>>n;
   cin>>max;

   cout<<"%d random numbers from 0 to %d are :-\n"<< n<< max;

   for (c = 1; c <= n; c++)
   {
      num = rand(max);
      cout<<num;;
   }

   getch();
   return 0;
}
