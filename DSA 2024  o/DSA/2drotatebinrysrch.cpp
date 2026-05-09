#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:

bool searchmatrix(vector<int>&matrix, int target){
int row = matrix.size();
int col = matrix.size();

int start=0;
int end= row*col -1;

int mid = start + (end-start)/2;
while(start<=end){
    int element = matrix[mid/col][mid%col];
    fi(element == targer){
    return 1;
    }
    if(element < target){
        start = mid + 1;
    }
    else{
        end =mid-1;
    }
    mid = start + (end-start)/2;
}
return 0;

}
};
int main(){
vector<vector><int>&matrix
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        matrix.push_back()
    }
}

//printing the array
int target;
cout<<"enter the searching element " <<endl;
cin>>target;

}
