#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //// 1d vector with initialization list
    vector<int>v1 ={1,2,3,4,5};

    //2d vector with size and element value initilization

    vector<vector<int>>  v2(3, vector<int>(3,5));


    //adding values using push_back()
    v1.push_back(6);


    cout<<" v1: ";

    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }

}
