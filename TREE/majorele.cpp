///find the major element
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={2,2,3,3,1,2,2};


    for(int i=0;i<v.size();i++){
        int cnt=0;
        for(int j=0;j<v.size();j++){
            if(v[j]==v[i]){
                cnt++;
            }
            if(cnt>v.size()/2){
                cout<<v[i]<<endl;
            }
        }
    }
}

//time comp o(n)
