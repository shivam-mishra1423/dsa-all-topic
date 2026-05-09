#include<iostream>
using namespace std;
int main()
{
   string s="shivam";
   int start=0;
   int end=s.size()-1;

    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }


    int size=1;

    while(s[size]!='\0'){
        size++;
    }

    cout<<"size "<<size<<endl;
    cout<<s;
}
