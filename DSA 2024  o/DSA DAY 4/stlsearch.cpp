//searching element in the vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    vector<int>v(n);
    for(auto i: v)
        cin>>v[i];

        //searching the element int binary search
        cout<< binary_search(v.begin(),v.end(),5);


return 0;
}
