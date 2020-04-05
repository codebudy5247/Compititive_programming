#include<iostream>
#include<vector>
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
  int c[101]={0};
  for(int i=0;i<v.size();i++){
  cin>>v[i];
  c[v[i]]++;
  }
  	    int flag = 0;
	    for(int i=0;i<101;i++)
	    {
	        if(c[i] >n/2)
	        {
	            cout<<i<<endl;
	            flag = 1;
	        }
	    }
	    if(flag == 0)
	    {
	        cout<<"NO Majority Element"<<endl;;
	    }
	}
	return 0;
}
