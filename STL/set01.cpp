//set data structure its also store the data
//set ki  property 1 hoti h  set store the only unique data not dubilacate
//property 2 set store the data into sorted order jb hm isme se value niklenge to sorted order me aayega by default ascending order
//realworld eg instra gram id create krte h to ussme user name unique hota h to ye set me daal deta hai
//benifit search,insert,delete all operation are performed in the log(n) times
//set ka implementation avl tree se hua hai or isme inorder traversal laga dge to hamara deta sorted form me aa jyga
//issko implement karne k lye red-black tree ka v used hota hai issme rotation km hoti hai compare to avl tree

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;

    //insert
    s.insert(1);
    s.insert(4);
     s.insert(2);
      s.insert(6);
       s.insert(5);


     for(auto it = s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
     }
     cout<<endl;

     set<int,greater<int>>s2;//grater iss liyea likhe taki value disinding order me print ho
     cout<<"printing the element in desnding order "<<endl;
     s2.insert(1);
    s2.insert(4);
     s2.insert(2);
      s2.insert(6);
       s2.insert(5);
      for(auto it = s2.begin(); it!=s2.end();it++){
        cout<<*it<< " ";
     }

}
