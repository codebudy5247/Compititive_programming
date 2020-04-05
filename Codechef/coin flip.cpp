#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  for(int i=0;i<t;i++){
    int g;
    cin>>g;
    for(int j=0;j<g;j++){
      int I,N,Q;
      cin>>I>>N>>Q;
      int head = N/2;
      int tail = N-head;
      if(I == Q){
        cout<<head<<endl;
      }else{
        cout<<tail<<endl;
      }
    }
  }
  return 0;
  }
