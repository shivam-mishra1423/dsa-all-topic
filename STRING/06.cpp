///escape characte
#include<iostream>
using namespace std;
int main()
{

    string s="shivam";

    int start=0;
    int end=s.size()-1;

    while(start<end){
        char temp=s[start];
        s[0]=s[end];
        s[end]=temp;

        start++;
        end--;
    }
}
