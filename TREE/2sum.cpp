//two sum

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};

    int k=3;
    for(int i=0;i<v.size();i++){
        for(int j=1;j<v.size();j++){
            if(v[i]+v[j]==k){
                cout<<i<<" "<<j<<endl;
                break;
            }
        }
    }
}
