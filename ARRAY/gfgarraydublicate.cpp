#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int arr[]={0,3,1,2};
    int cnt=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt>2){
            v.push_back(arr[i]);
        }
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
