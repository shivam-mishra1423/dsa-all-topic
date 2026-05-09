#include<iostream>
using namespace std;
int print(int start, int end){
if(start==end){
    //cout<<end;
    return 1;
}


cout<<start<<" ";
    print(start+1,end);

}
int main()
{
   int start,end;
   cout<<"enter the starting value "<<endl;
   cin>>start;
   cout<<"enter the end value "<<endl;
   cin>>end;
  cout<< print(start,end);
}
