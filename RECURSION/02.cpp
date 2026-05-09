//printing the  reverse number using recursion
#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0){
        cout<<n<<endl;
        return;
    }
    else{
        cout<<n<<endl;
    }
    print(n-1);//recursive function
}
int main()
{
    print(5);
}
