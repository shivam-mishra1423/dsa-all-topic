#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<vector<int>>v;

   v[3][3];
   cout<<"enter the element "<<endl;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>v[i][j];
    }
   }


    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<v[i][j];
    }
   }
}
