#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    //creating
    unordered_map<string,int>m;


    //insertion
    //1
    pair<string,int>p= make_pair("shivam", 3);
    m.insert(p);


    pair<string,int>pair2("munnu",2);
    m.insert(pair2);


    pair<string,int>p3=make_pair("a",1);
    m.insert(p3);



    //using for each loop
    for(auto a:m){
        cout<<a.first<<" "<<a.second<<endl;
    }


    ///using iteratoer
    unordered_map<string,int>::iterator it=m.begin();

    while(it != m.end()){
        cout<<it->first <<" "<<it->second<<endl;
        it++;
    }

}
