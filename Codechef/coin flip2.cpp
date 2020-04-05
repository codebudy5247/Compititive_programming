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
      int i_state = N/2;
      int o_state = N-i_state;
      if(I == Q){
        cout<<i_state<<endl;
      }else{
        cout<<o_state<<endl;
      }
    }
  }
  return 0;
}
