#include<iostream>
using namespace std;
void update(int arr[], int n)
{
    cout<<"Inside the function " <<endl;
    //printing yhe array
    for(int i=0;i<3;i++)
    {
        cout<<arr[i] << " ";
    }
    cout<<"going back to main function " ;
}
int main()
{
    int arr[3] = {1,2,3};
    update(arr,3);
}
