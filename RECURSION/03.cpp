//print number 1 to n using recursion
#include<iostream>
using namespace std;
void print(int n){
if(n==1){
    cout<<n<<endl;
    return;
}
else{
    print(n-1);
    cout<<n<<endl;
}
}
int main()
{
    print(5);
}
