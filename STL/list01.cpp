//ye list linked list ka he short form hai
//ye hamare ##doubali linked list## hai iss hm directly implement kar sakte hai

//syntax   list<type>name_of_list;

//basic operation 1 push_back 2 push_front 3 pop_front 4 pop_back 5 front 6 size 7 empty

#include<iostream>
#include<bits/stdc++.h>//issme sare libary include hai like list vector queue
using namespace std;
int main()
{
    list<int>l;
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(20);

    l.push_front(15);

    cout<<l.front()<< " "<<l.back()<<endl;
    cout<<l.size()<<" "<<endl;
  /*
    l.pop_front();
    l.pop_back();
    */


    //printing the all the value
    for(auto it = l.begin(); it !=l.end();it++){//negi 28.8 min stl understand again loop l . end ye last k aage wale ko point kara raha h
        cout<<*it<<" ";
    }
    cout<<endl;
    //auto khud define kr leta h ki kiss type k value h
    //auto = list<int>::iterator ye iss type k hai


    //reverse the value
     for(auto it = l.rbegin(); it !=l.rend();it++){
        cout<<*it<<" ";
    }
}
