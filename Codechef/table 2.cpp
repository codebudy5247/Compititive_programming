#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
for(int j=0;j<t;j++){
    string s;
    cin>>s;
    int cnt0=0,cnt1=0;
    int i=0;
    while(i!=s.length()){
        if(s[i]=='1'){
            cnt1++;
            i++;
        }
        else{
            cnt0++;
            i++;
        }
    }
    if(cnt1>cnt0){
        cout<<"WIN"<<endl;
    }
    else{
        cout<<"LOSE"<<endl;
    }
}
return 0;
}
