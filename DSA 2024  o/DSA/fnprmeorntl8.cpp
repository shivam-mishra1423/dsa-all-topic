#include<iostream>
using namespace std;
int isprime(int n){
for(int i = 2; i<n ; i++)
{
    if(n%2==0){
        return 0;//not a prime number
    }
}
return 1;//1 means prime number
}
int main(){
int n;
cin>>n;
if(isprime(n)){
    cout<<"this is prinme number ";
}
else{
    cout<<"this is  not prime number";
}
}
