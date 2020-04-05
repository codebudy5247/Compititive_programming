#include <iostream>
#include <deque>
using namespace std;
void printKMax(int arr[], int n, int k){
    int big=0;
    for(int i=0;i<(n+1)-k;i++)
    {
       for(int j=i;j<(k+i)-1;j++)
       {
           if(k>3)
           {
            if(arr[j]<arr[j+1]&&big<arr[j+1])
            {
                big=arr[j+1];
            }
           }
           else
           {
               if(arr[j]<arr[j+1])
            {
               big=arr[j+1];
            }
           }
       }
       cout<<big<<" ";
    }
}
int main(){

   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
