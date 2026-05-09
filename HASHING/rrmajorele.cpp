#include<iostream>
#include<vector>
#include<map>
using namespace std;
void major(vector<int>&v){

    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }

   for(auto it: mp){
    cout<<it.first<<" "<<it.second<<" ";
   }
   // return -1;
}
int main()
{
   vector<int>v={3,3,3,4,4,5,3};

   major(v);

   cout<<endl;




}
