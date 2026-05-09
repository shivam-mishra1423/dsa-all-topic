#include<iostream>
using namespace std;
void fun3(int n){
//base case
if(n==0){
    return;
}
cout<<n<<endl;
fun3(n-1);


}



int main()
{
    fun3(10);
}
