#include<iostream>
using namespace std;
//Q1
/*
void update(int a)//return type void hi
{
    a=a/2;

}

int main()
{
    int a=10;
    update(a);
    cout<< a <<endl;
    */


    //Q2
    /*
    int update(int a)
    {
        a-=5;
        update(a);
    return a;
    }
    int main()
    {
        int a=15;
        update(a);
        cout<<a<<endl;

}
*/
int update(int a)
{
    int ans= a*a;
    return ans;
}
int main()
{
    int a=14;
    int ans=update(a);
    cout<<ans<<endl;
}
