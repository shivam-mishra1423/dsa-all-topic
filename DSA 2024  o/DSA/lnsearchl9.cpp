#include<iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for(int i = 0; i <size; i++){
        if(arr[i]==key){
           return 1;
        }

    }
     return 0;
}
int main()
{
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    cout<<"Enter searching element " <<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);//function call

    if(found)
    {
        cout<<"The key is Found this array "<<endl;
    }
    else{
        cout<<"the key not found this array " <<endl;
    }
    return 0;
}
