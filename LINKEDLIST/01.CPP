#include<iostream>
using namespace std;
class node{
public://access modifier
    int data;
    node *next;
};
int main()
{
    node a1;//a1 is object of node
    a1.data=5;
    a1.next=NULL;

    node a2;
    a2.data=6;
    a2.next=NULL;


    node a3;
    a3.data=5;
    a3.next=NULL;

//a1 a2 a3 all are the statically object is create

}
