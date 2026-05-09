// support hame 3 value ka pair banana hai
// name , age , weight to hm name ko ekk pair or age and weight ko ekk pair me rakh dge
#include<iostream>
using namespace std;
int main()
{
    pair<string, pair<int,int>>p;//to ye ekk sath three value store karaga

   /*first way to initilised

    p.first ="rohit";

    p.second.first=25;//initilised
    p.second.second=50;//inselised

    //printing
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

*/

//second way to initilised

p=make_pair("rohit",make_pair(25,80));
 cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}
