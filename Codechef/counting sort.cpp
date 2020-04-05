#include<iostream>
using namespace std;
void countingsort(int a[],int n,int b[],int k);
int main()
{
int a[]={6,4,6,5,9,8,2,6,5,4,4};
int n=11;
int b[11];
int k=10;
countingsort(a,n,b,k);
for(int i=0;i<n;i++)
cout<<b[i]<<" ";
return 0;

}
void countingsort(int a[],int n,int b[],int k)
{
int i,j,c[k];
for(i=0;i<k;i++)
 c[i]=0;
 for(j=0;j<n;j++)
 {
 c[a[j]]=c[a[j]]+1;
}
for(i=1;i<k;i++)
c[i]=c[i]+c[i-1];
for(j=n-1;j>=0;j--)
{
b[c[a[j]]-1]=a[j];
c[a[j]]=c[a[j]]-1;
}

}
