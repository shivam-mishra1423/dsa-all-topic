#include<iostream>
using namespace std;

//not correct code
bool primecount(int n){
int cnt=0;
for(int i=2;i<n;i++){
    if(n%i==0){
        cnt++;
    }
    return cnt;
}

}
int main(){
int n;
cin>>n;
int result=primecount(n);
cout<<result;
}
