 #include<iostream>
 #include<vector>
 using namespace std;
 int findmaximun(vector<int>v,int n)
 {
     int max=v[0];
     for(int i=0;i<n;i++)
     {
         if(v[i]>max)
            max=v[i];
     }
     return max;
 }
 int main()
 {
     int n;
     cin>>n;
     vector<int>v(n);
     for(int i=0;i<n;i++)
      cin>>v[i];
     int k=findmaximun(v,n);
     cout<<k;
     return 0;
 }
