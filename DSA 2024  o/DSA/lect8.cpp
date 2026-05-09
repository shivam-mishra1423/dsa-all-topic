#include<iostream>
using namespace std;
int main(){
    /*
int num = 2;
cout<<endl;

switch( num ){
case 1: cout << "First " <<endl;
break;
case 2: cout<<"Second"<<endl;
break;
default : cout<<" it is default case " <<endl;
}
*/
/*int ch= 'a';
cout<<endl;

switch( ch ){
case 'a': cout << "First " <<endl;
break;
case 2: cout<<"Second"<<endl;
break;
default : cout<<" it is default case " <<endl;
}
*/

int a,b;
cout<<"enter first number " <<endl;
cin>>a;
cout<<"enter second number"<<endl;
cin>>b;
char op;
cout<<"enter your choice based operator" <<endl;
cin>>op;
switch(op){
case '+': cout<<"the sum is A  and B is "<<(a+b)<<endl;
break;
case '-':cout<<"the sub is A  and B is "<<(a-b)<<endl;
break;
case '*':cout<<"the multi is A  and B is "<<(a+b)<<endl;
break;
case '%':cout<<"the Mudlo is A  and B is "<<(a%b)<<endl;
break;
case '/':cout<<"the div is A  and B is "<<(a/b)<<endl;
break;
default:cout<<"please enter a valid operator " <<endl;
}
}
