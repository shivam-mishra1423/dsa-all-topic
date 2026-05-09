#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
   /*int n;
    cout<<"enter the size of the vector " <<endl;
     cin>>n;
    vector<int>v(n);

    for(auto i :v){
        cin>>v[i];
    }
    */

    int n;
    cout<<"enter the size of the vector";
    cin>>n;
    vector<int>v(n);
    for(auto i: v){
        cin>>v[i];
    }

    //sorting the element in increasing order
    sort(v.begin(),v.end());

    for(auto i : v){
        cout<<v[i]<<" ";
    }

     //sorting the element in deccreasing  order
  /*  sort(v.begin(),v.end(), greater<int>());

    for(auto i : v){
        cout<<v[i]<<" ";
    }
*/
}
