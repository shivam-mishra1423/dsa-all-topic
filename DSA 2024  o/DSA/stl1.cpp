 /*#include<iostream>
#include<array>
using namespace std;
int main()
{
array<int,4>a={1,23,34,5};
for(int i =0; i<a.size();i++){
    cout<<a[i];
}cout<<endl;

cout<<"element at 0nd index -> " <<a.at(0)<<endl;
cout<<"element at 1nd index -> " <<a.at(1)<<endl;

cout<<"element at 1st element -> " <<a.front()<<endl;
cout<<"element at last element -> " <<a.back()<<endl;
}
*/
/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;

cout<<"Size -> "<<v.capacity()<<endl;

v.push_back(1);
cout<<"capacity -> "<<v.capacity()<<endl;

v.push_back(2);
cout<<"capacity -> "<<v.capacity()<<endl;

v.push_back(3);
cout<<"capacity -> "<<v.capacity()<<endl;
cout<<"Size -> "<<v.size()<<endl;

}
*/

/*
//list
#include<iostream>
#include<deque>
using namespace std;
int main(){

deque<int>d;
d.push_back(1);//ye hmne last me add kiya
d.push_front(2);//ye front me add kiya

for(int i :d){
    cout<<i<<" ";
}


d.pop_front();
cout<<endl;
for(int i :d){
    cout<<i<<" ";
}
*/
/*
//list

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l;

    list<int>n(l);//list copy ho gye

    l.push_back(1);
    l.push_back(2);

    for(int i:l){
        cout<<i<<endl;
    }

}
*/
/*
#include<iostream>
#include<stack>
using namespace std;
int main()
{
  stack<string>s;

  s.push("love");
  s.push("babber");
  s.push("kumar");

  cout<<"Top Element " <<s.top()<<endl;

  s.pop();

  cout<<"Pop the element " <<s.top()<<endl;
}
*/
/*
//queue
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q;

    q.push("love");
    q.push("babber");
    q.push("kumar");


cout<<"the velue of front is " <<q.front()<<endl;
cout<<"the velue of back is " <<q.back()<<endl;


}
*/
/*
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
priority_queue<int>maxi;//jb aishea bana hi to ye based hoy=ta hi maxheap pe
//jb v issme se element nekalege to maxmimum element nikalege


//min heap
priority_queue<int,vector<int> ,greater<int> > mini;


//push data
maxi.push(1);
maxi.push(3);
maxi.push(2);
maxi.push(0);

cout<<"size of maxheap -> " <<maxi.size()<<endl;

int n= maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<< " ";
maxi.pop();
}
cout<<endl;

cout<<"Start Story of Min heap " <<endl;
//push in min
mini.push(1);
mini.push(3);
mini.push(2);
mini.push(0);

cout<<"size of miniheap -> " <<mini.size()<<endl;

int s= mini.size();
for(int i=0;i<s;i++){
    cout<<mini.top()<< " ";
mini.pop();
}
cout<<endl;


}
*/
#include<iostream>
#include<set>

using namespace std;
int main(){
set<int>s;

s.insert(5);
s.insert(1);
s.insert(6);
s.insert(6);
s.insert(6);
s.insert(0);

  for(int i:s){
    cout<<i<<endl;
  }

  //using iterator

  set<int>::iterator it =s.begin();
  it++;

  s.erase(it);
  for(auto i :s){
    cout<<i<<endl;
  }

  cout<<"5 present or not : " <<s.count(5);

cout<<endl;
set<int>::iterator itr =s.find(5);

for(auto it=itr; it!=s.end();it++){
    cout<<*it<<" ";
}cout<<endl;

}
