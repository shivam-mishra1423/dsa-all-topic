#include<iostream>
#include<vector>
using namespace std;
void print(vector<pair<int,int>>&v){

for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;//to  v[i] v of i pair hai agar iska value chaiyhea to v[i].first used krege
}
}
int main()
{
    vector<pair<int,int>>v;//={{1,2}, {2,3} , {4,5} };// yaha har vector ki value store karigi doo value v[0] ye 2 value store karega
    print(v);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }

    print(v);
}

