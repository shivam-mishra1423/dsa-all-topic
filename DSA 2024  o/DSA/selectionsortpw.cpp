#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionsort(vector<int>&v){
int n=v.size();

for(int i=0;i<n-1;i++){
    //finding element unsorted;
    for(int j=i+1;j<n;j++){
        if(v[j]<v[min_index]){
            min_index=j;
        }
    }
    if(i!=min_index){
        swap(v[i],v[min_index]);
    }
}
}

int main()
{
    int n;
    vector<int>v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    selectionsort(v);

    for(int i=0;i<n;i++){
        cou<<v[i]<<endl;
    }
}
