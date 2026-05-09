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

    int key;
    cout<<"enter the searching element "<<endl;
    cin>>key;
        //searching the element int binary search
        int b= binary_search(v.begin(),v.end(),key);
        cout<<b<<endl;
cout<<find(v.begin(),v.end(),54)-v.begin()<<endl;//ye hm index return krke dega

return 0;
}
