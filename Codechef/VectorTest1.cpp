#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
   for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
}


void printAddress(vector<int>v){
   for(int i =0;i<v.size();i++){
     cout<<(int)&v[i]<<" ";
   }
   cout<<endl;
}


int main()
{
    int n;
    cin>>n;
    vector<int>s(0);
    cout<<s.capacity();
//    for(int i =0;i<n;i++){
//        cin>>s[i];
//    }
    print(s);
    printAddress(s);
    s.push_back(8);
    s.push_back(8);
    s.push_back(8);s.push_back(8);s.push_back(8);s.push_back(8);s.push_back(8);s.push_back(8);
    print(s);
    printAddress(s);

    cout<<endl;


}
