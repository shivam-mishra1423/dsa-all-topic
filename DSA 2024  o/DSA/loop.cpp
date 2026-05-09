#include<iostream>
using namespace std;
int main(){
    // int n;
    // int i=1;
    // cout<<"enter a number"<<endl;
    // cin>>n;
    // while (i<=n){
    //     cout<<i  <<endl;
    //     i=i+1;
    // } 

    //print 1 to n natural numbers
//     int sum=0;
//     int i=1;
// int n;
// cout<<"enter a number";
// cin>>n;
//     while (i<=n) {
//         sum=sum+i;
//         i=i+1;
//     }
//     cout<<"the value of sum is : "<<sum<<endl;

// //Q1 1 to n number find even number
// int n;
// int i=2;
// cout<<"emter a number ";
// cin>>n;
// while (i<=n) {
//     if (i%2==0) {
//     cout<<i<<endl;
//     }
//     i=i+1;
// }

//number is prime or not
int n;
int i=2;
cout<<"enter a number";
cin>>n;
while (i<n) {
    if(n%i==0){
        cout<<" not prime number"<<endl;
    }
i=i+1;
}
}
