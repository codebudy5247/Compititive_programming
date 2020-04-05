#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    int n;
    cin>>t;


    for(int i=0;i<t;i++)
        {
            cin>>n;


                int temp;
                int a[n];
                for(i=0;i<n;i++)
                {
                    cin>>a[i];
                }
                for(i=0;i<n;i++)
                {
                    for(j=i+1;j<n;j++)
                    {
                        if(a[i]>a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
                }
                for(i=0;i<n;i+=2)
                {
                    if(a[i]!=a[i+1])
                    {
                        cout<<a[i]<<endl;
                        break;
                    }
                }

        }

    return 0;
}
