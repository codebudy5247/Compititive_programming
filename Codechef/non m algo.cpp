 #include<iostream>
 #include<algorithm>
 #include<deque>
 #include<list>
 using namespace std;
int main()
 {
   deque<int>v{1,2,3,4,5,6,7,1,2,3,4,5,6,7};
   list<int>v1{3,4,5,6};
   deque<int>:: iterator pos;
   pos=find_first_of(v.begin(),v.end(),v1.begin(),v1.end());
     //   while(pos!=v.end())
       // {
         //   cout<<distance(v.begin(),pos)+1<<endl;
           // pos++;
           // pos = find_end(pos, v.end(),v1.begin(), v1.end());
//        }
 //}

