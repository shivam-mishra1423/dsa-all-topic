//isme hme jarury nhi hai ki data h sorted form me store karake rakhe
//it store unique element
//it store data in unordered way isme data kisi v order me bahar aa sakte h
//search delete insert ye isme o(1) me ho jata hai to isme hm used kr skte h ye powerfull hi
//iska implementation hashing se hua hai iske wahja se 0(1) me hota hai
//block-chain me hashing ka used hota hai
#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(11);
    s.insert(10);

    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }

    //unordered_multiset =issme h dublicate element ko v rakh sakte hai
    //there are four type of the set
    //set , multiset , unordered_set , ubordered_multiset

}
