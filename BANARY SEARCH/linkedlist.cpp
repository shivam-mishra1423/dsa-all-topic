#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
  vector<int>v={1,2,3,4,5};
  vector<int>v2={6,7,8,9};

  swap(v,v2);

  for(auto i:v){
    cout<<i<<" ";
  }


}
