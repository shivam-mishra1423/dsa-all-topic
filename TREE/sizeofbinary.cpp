

//methos 1
//this code is apcilabe in all binary tree but this is crete or traverse onr side tree its firstly move left at the end the move right
void total(node *root, int &count){
    //base case
    if(root==NULL){
        return;
    }
    count++;
    total(total->left,count);
    total(root->right,count);
}

////method 2
//first node =1
//fir 1+left +right\
// 1+ total node of left side +total node of right side 1 ye root node ho gaya

int totalnode(node *root){
if(root==NULL){
    return 0;
}

return 1+totalnode(root->left)+ totalnode(root->right);
//o(n)
}
