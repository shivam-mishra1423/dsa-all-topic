//create a tree
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
int data;
node *left, *right;
  node(int value){//creating a constructor
  data=value;
  left=right=NULL;
  }
};
int main()
{
    int first;//ye left wala hofa
    int second;//ye right wala hoga
    int x;
    cout<<"enter the root node "<<endl;
    cin>>x;
    queue<node*>q;// hm log node ka address dalte hai taki node k left or right me ja sake
    node *root=new node(x);//yaha ekk node create ho gaya jsme hm adderss dal diyea
    q.push(root);

    //working of creation
    while(!q.empty()){//jab tak hamra queue empty na ho jie
        node *temp=q.front();
        q.pop();//queue ko khali kar diyea
        cout<<"enter the left value "<<endl;
        cin>>first;//this value is left child
        if(first!=-1){//agar x = -1 to exiest nhi karega
            temp->left=new node(first);//left me element dalenge jo new node address dega usse temp k left me dal dege
            q.push(temp->left);//yaha hm address ko push ker rahe hai
        }
        cout<<"enter the right value "<<endl;
        cin>>second;//right side
        if(second!=-1){
            temp->right=new node(second);
            q.push(temp->right);
        }

    }
}
