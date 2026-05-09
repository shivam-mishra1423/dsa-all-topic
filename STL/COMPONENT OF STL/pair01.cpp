#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,string>p;   /////angular bracker k between me data type aayega


    ///first way
    p= make_pair(2,"abc");
    cout<<p.first<<" "<<p.second<< endl;

    ///second way to make pair

    pair<int,string>q;
    q={3,"shivam"};
    cout<<q.first<<" "<<q.second<<endl;

     pair<int,string>v=q;///pair ko ham direct copy v kar sakte hai
     q.first = 4;
     cout<<v.first<<" "<<v.second<<endl;


     ///
     int a[]={1,2,3};
     int b[]={2,3,4};
     pair<int,int>p_array[3];
     p_array[0]={1,2};
     p_array[1]={2,3};
     p_array[2]={3,4};

     for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
     }
}
