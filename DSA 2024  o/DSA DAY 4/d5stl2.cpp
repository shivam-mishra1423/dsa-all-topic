#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //deleating the element int he vector
   vector<int>v;
   v.push_back(5);
   v.push_back(51);
   v.push_back(55);
    v.push_back(58);
    v.push_back(56);
    cout<<"size of the vector " <<v.size()<<endl;
    cout<<"capicity of the vector " <<v.capacity()<<endl;

    v.pop_back();
    cout<<"size of the vector " <<v.size()<<endl;
    //remove the element in the vector in any index
    v.erase(v.begin()+1);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;//two element already nikal chuka hi 1 last index wala

    }

    //insert the element in the any index
    v.insert(v.begin()+1,50);//first index pe 50 insert ho gaya or saare element ek ek shift ho gaya
    cout<<"printing the element after inserting 50 in the fisrt index " <<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

    //total clear krne k liye
    v.clear();
}
