#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //creating vector , declear
    vector<int>v;

    //size of the empty vector
    cout<<"size of the vector  " <<v.size()<<endl;

    //capacity of the vector
    cout<<"the capacity of the vector "<<v.capacity()<<endl;

    //insert the element in the vector
    v.push_back(2);
    v.push_back(4);
     cout<<"size of the vector  " <<v.size()<<endl;//2
     cout<<"the capacity of the vector "<<v.capacity()<<endl;//2

    //update value
    v[1]=3;
    cout<<v[1]<<endl;

}
