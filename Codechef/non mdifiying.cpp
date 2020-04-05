#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
   vector<int>v{1,2,3,4,5,6,7,1,2,3,4,5,6,7};
   vector<int>v1{3,4,5,6};
  int itr1=count(v.begin(),v.end(),20);
    cout<<itr1<<endl;
    int num=count_if(v.begin(),v.end(),[](int x){return x<10;});
    cout<<num<<endl;;
    cout<<*min_element(v.begin(),v.end());
    cout<<endl;
    cout<<*max_element(v.begin(),v.end());
    cout<<endl;
    auto mm = minmax_element(v.begin(),v.end());
    cout << "min: " << *(mm.first) << endl;
    cout << "max: " << *(mm.second) << endl;
    cout << "distance: " << distance(mm.first,mm.second) << endl;
    vector<int>::iterator itr,itr2,itr3,pos;
    itr=find (v.begin(),v.end(),7);
    itr2=find (v.begin(),v.end(),6);
    cout<<*itr<<" "<<*itr2<<endl;
    cout<<*find_if(v.begin(),v.end(),[](int x){return x>5;});
    itr3=search_n(v.begin(),v.end(),2,7);
     if (itr3!= v.end())
        {
           cout<<distance(v.begin(),itr3) +1<<endl;
        }


    return 0;
}
