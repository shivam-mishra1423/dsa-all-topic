#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string>s;

    int key[]={1,2,3,4,5};
    string value[]={"shivam", "munnu", "rohit" ,"mohit" ,"rohan"};

    for(int i=0;i<5;i++){
        s[i]=value[i];
    }


    for(auto i:s){
        cout<<i.first<<" "<<i.second<<" ";
        cout<<endl;
    }
}
