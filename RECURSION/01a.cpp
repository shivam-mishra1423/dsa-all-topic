//infinite function because we do not write spacic condition(base case);

//error generate stack over follow// segementation fault
#include<iostream>
using namespace std;
void print(){
cout<<"hii " <<endl;
print();//recursive call
}
int main()
{
    print();
}
