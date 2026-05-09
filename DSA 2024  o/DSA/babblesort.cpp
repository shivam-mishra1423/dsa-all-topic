#include<iostream>
#include<vector>
using namespace std;
void babblesort(vector<int>&arr,int n){
for(int i=0;i<n;i++){//traversal the array
    //this loop is used for comparing
    for(int j=0;j<n;j++){//hm n-i v kr skte h
        if(arr[j]<arr[i]){
            swap(arr[i],arr[j]);
        }
    }

}

}
int main()
{
    int n;
    cout<<"enter the size of arr " <<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
babblesort(v,n);
    //printing the array
    cout<<"sorted array " <<endl;
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
}
