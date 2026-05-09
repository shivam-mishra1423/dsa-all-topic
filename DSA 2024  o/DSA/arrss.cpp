#include<iostream>
#include<vector>
using namespace std;
void ssort(vector<int> &v){
int n=v.size();
for(int i=0; i<n-1; i++){
int minind=i;
for(int j=i+1;j<n;j++){
    if(v[j]<v[minind]){
        v[minind]=j;
    }
}
swap(v[i],v[minind]);
}
return ;
}
int main()
{
    int n;
    cout<<"enter the size of n ";
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    ssort(v);
    for(int j=0;j<n;j++){
        cout<<v[j];
    }
}
