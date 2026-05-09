//stack basic
#include<iostream>
using namespace std;
class stack{
public:
    int *arr;//this pointer used  when the element is pop
    int size;
    int top;
    bool flag;
    stack(int s)//constructor
    {
        size=s;
        top=-1;
        arr=new int[s];//dynamically create because run time declear size
        flag=1;
    }

////////////////////////////////////push operation///////////////////
void push(int value){
//edge case
if(top==size-1){
    cout<<"stack overflow ";
    return;
}
else{
    top++;
    arr[top]=value;
    cout<<"pushed "<<value<<"into the stack \n";
    flag=0;
}
}


//pop operation yaha hm koi argument pass nhi karte
void pop(){
//base case
if(top==-1){
    cout<<"stack is underflow "<<endl;
    return;
}
else{
    cout<<"popped "<<arr[top]<<"from the stack\n";
    top--;
}
}

//////////////////is empty///////////////////
bool isempty()
{
    if(top==-1){
        cout<<"stack is empty\n";
        return 1;
    }
    else{
        return 0;
    }
}


////////////////////peek operation/////////////
int peek(){
//condition
if(top==-1)
{
    cout<<"stack is empty "<<endl;
    return -1;
}
else{
    return arr[top];
}
}
};
int main()
{
stack s(5);
s.push(5);
s.push(5);
s.push(5);
s.push(5);
s.push(5);

s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();

}
