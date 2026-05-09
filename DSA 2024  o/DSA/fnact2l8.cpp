#include<iostream>
using namespace std;
//1 -> Even
//0 -> odd

bool is Even(int a){
if(a&1){//agar koi v number a odd 1 true ho to oh odd hota hai
   return 0;
}
else{//even
    return 1;
}
}

int main()
{
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"even number" <<endl;
    }
    else{
        cout<<"odd number " <<endl;
    }
    return 0;
}
}
