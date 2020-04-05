#include<iostream>
#include<vector>
#include<algorithm>
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
   for(int i=0;i<v.size();i++)
   cin>>v[i];
    int max_so_far = *min_element(v.begin(),v.end()), max_ending_here = 0;
    for (int i = 0; i < v.size(); i++)
    {
        max_ending_here = max_ending_here + v[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    cout<<max_so_far;
    cout<<endl;
 }
 return 0;
}
