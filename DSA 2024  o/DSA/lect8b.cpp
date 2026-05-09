#include<iostream>
using namespace std;
int isEven(int a ) {
if(a&1){//a ka and k sath 1 krge too odd aa jyega
    return 0;
}
else{
    return 1;//yaha even aayeaga
    }
}
int main()
{
    int a;
    cin>>a;
if(isEven(a)){
    cout<<"even number : "<<endl;
}
else{
    cout<<"this is odd number "<<endl;
}
}
