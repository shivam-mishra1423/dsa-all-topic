#include<bits/stdc++.h>
using namespace std;


////agar vectorvko locally dalte hai to 10 k power 5 he dal sakte hai but goloble me hm 10 k pow 7 progg web pe
void print(vector<int>v){

for(int i=0;i<v.size();i++){//size()  size function help the find the size  0(1)
    cout<<v[i]<<" ";
}
}
int main()
{
    //vector<pair<int,int>>v;///to yah vector of pair ban jyga

    vector<int>v;//initially vector 0 size k hai jishea jishea element add krge size increase hoga
    int n;
    cout<<"enter the size of the vector"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);//vector k end me x push ho jyga 0(1)

    }
    print(v);

    vector<int>a(5,-1);
    print(a);


    v.push_back(5);//ye last me insert karta hai 0(1)
    v.pop_back();//ye last se pop karta  0(2)

    vector<int>v3=v;//vector k hm direct copy kr sakte hi but pointer arr ko nhi kar sakte hai
    //0(n) copy k time copy
    // jb as refrence pass kte hai to complixity achi ho jati hai vector because is direct vector v operation karte hai na k copy pe

    //vector me khuh v dal sakte hai int, pair string , khuh v

}
