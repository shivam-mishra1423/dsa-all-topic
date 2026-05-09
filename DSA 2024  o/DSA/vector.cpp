#include<iostream>
#include<vector>
using namespace std;
void print_vector(vector<int>&data){//pass by reference
data.push_back(12);
for(int i=0;i<data.size();i++)
{
cout<<data[i];
}
cout<<endl;
}

int main(){

vector<int>data;
data={1,2,3,4,5,6,7,8,9};
print_vector(data);
print_vector(data);
print_vector(data);

}
