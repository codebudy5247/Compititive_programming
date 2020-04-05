#include <iostream>
using namespace std;
int main()
{
    int n, reversedInteger = 0, remainder, originalinteger;
    cin>>n;

    originalinteger = n;


    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    if (originalinteger == reversedInteger)
        cout<<originalinteger;
    else
        cout<<"it is not";
return 0;
}
