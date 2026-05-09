#include<iostream>
#include<vector>
/*using namespace std;
void fun(vector<int> blah){

for(int i=0;i<=10;i++){
    blah.push_back(i);
}
}
*/
using namespace std;
int main(){
vector<int>v;
/*#
v.push_back(10);
v.push_back(20);
v.push_back(3);

v[1]=100;
for(int i=0;i<3;i++)
{
    cout<<v[i]<<endl;;
*/
for(int i=0;i<100;i++){
v.push_back(i);
}

for(int i=0;i<100;i++){
    cout<<v[i];
}
}
