#include<iostream>
using namespace std;
int getlength(char name[]){
int count=0;
for(int i=0;name[i]!='0';i++){
    count++;
}
return count;

}
int main()
{
    int n;
    char name[n];
    cin>>name;

  cout<<"your name is " <<endl;
  cout<<name<<endl;

  cout<<"length  : "<<getlength(name);

  return 0;

}
