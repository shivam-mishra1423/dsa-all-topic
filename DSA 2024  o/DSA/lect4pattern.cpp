#include<iostream>
using namespace std;
int main(){
    //pattern 1
/*int n;
cin>>n;
int i =1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//pattern 2
/*
int n;
cin>>n;
int i =1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//pattern 3;
int n;
cin>>n;
int count =1;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<"  ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
/*int n;
cin>>n;
int rows=1;
while(rows<=n){
    int cols=1;
    while(cols<=rows){
        cout<<*;
        cols=cols+1;
    }
    cout<<endl;
    rows=rows+1;
}
*/
//same pattern as above program its print number and above are the print the star
/*int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<j;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/

//pattern 5
/*
int n;
cin>>n;
int count=1;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count=count+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
//pattern 5;
/*
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    int value=i;
    while(j<=i){
        cout<<value;
        value=value+1;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
*/
/*
//pattern
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i-j+1;
        j=j+1;

    }
    cout<<endl;
    i=i+1;

}
*/
/*
int n;
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch='A' + i -1;
        cout<<ch;
       j=j+1;

    }
    cout<<endl;
    i=i+1;
}
*/
}
