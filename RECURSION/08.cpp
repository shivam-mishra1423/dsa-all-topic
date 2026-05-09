#include<iostream>
using namespace std;
void reverse(int end,int start){
//base case
if(end==1){
    cout<<1<<endl;
    return;
}
else{
    cout<<end<<endl;
    reverse(end-1,start);
}
}
int main()
{
    int end;
    cout<<"enter the end number "<<endl;
    cin>>end;
    int start=1;
    reverse(end,start);

}
