#include<iostream>
using namespace std;
int main(){
//     int n;
//     cout<<"enter pattern size"<<endl;
//     cin>>n;
//     int i=1;//i for rowS
//     while (i<=n) {
//     int j=1;//for colomnS
//     while (j<=n) {
//     cout<<"*";
//     j=j+1;
//     }
// cout<<endl;
// i=i+1;
//     }

int n;
int i=1;
cin>>n;
while (i<=n) {
    int j=1;
    while (j<=n) {
    cout<<i;
    j=j+1;
    }
    cout<<endl;
    i=i+1;

}

}