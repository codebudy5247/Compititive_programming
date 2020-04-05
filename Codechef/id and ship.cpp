#include<iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 for(int i=0;i<t;i++)
 {
  char n;
  cin>>n;
  if(n=='B'||n=='b')
  cout<<"BattleShip"<<endl;
  if(n=='C'||n=='c')
  cout<<"Cruiser"<<endl;
  if(n=='D'||n=='d')
  cout<<"Destroyer"<<endl;
  if(n=='F'||n=='f')
  cout<<"Frigate"<<endl;
 }
 return 0;
}
