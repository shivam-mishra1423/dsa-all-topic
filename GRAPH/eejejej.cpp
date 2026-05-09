#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string>name;

    cout<<"enter your name "<<endl;

    for(int i=0;i<5;i++){
            string temp;
            cin>>temp;
        name.push_back(temp);
    }


    for(int i=0;i<5;i++){
        cout<<name[i]<<endl;
    }
}
