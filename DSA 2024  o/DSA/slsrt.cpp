#include<iostream>
#include<vector>
using namespace std;
void slectionsort(vector<int> &v){
int n = v.size();

for(int i=0;i<n-1;i++){
    //find min element
    int min_index=i;//assume min element avi i pe hi means 0 pe;
    for(int j=i+1;j<n;j++){
        if(v[j]<v[min_index]){
            min_index=j;
        }
    }
    //placing min element  at beginning
    swap(v[i],v[min_index]);
}
return ;
}
int main(){
int n;
cout<<"enter size of n"<<endl;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
slectionsort(v);
for(int i=0;i<n;i++){
    cout<<v[i] << " ";
}

}
