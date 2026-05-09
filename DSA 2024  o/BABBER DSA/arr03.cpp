//character array
#include<iostream>
using namespace std;
void printarray(char ch[],int n){
for(int i=0;i<n;i++){
    cout<<ch[i]<<endl;
}

}
int main()
{
    char ch[5]={'a','e','i','o','u'};
    printarray(ch,5);
    return 0;

}
