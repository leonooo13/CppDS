#include<iostream>
using namespace std;
typedef struct TreeNode
{
    int val=0;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
}TreeNode;
TreeNode* createTree() {
    TreeNode* root = new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);
    return root;
}
void preOrdervisit(TreeNode* t){
    if(t==NULL) return;
    cout<<t->val<<" ";
    preOrdervisit(t->left);
    preOrdervisit(t->right);
}
int depth(TreeNode* t){
    if(t==NULL) return 0;
    return max(depth(t->left),depth(t->right))+1;
}
bool isBalanced(TreeNode* t){
    if(t==NULL) return true;
    int leftheight=depth(t->left);
    int rightheight=depth(t->right);
    if(abs(leftheight-rightheight)>1) return false;
    return isBalanced(t->left) && isBalanced(t->right);
}
int main(){
    TreeNode* tree=createTree();
    preOrdervisit(tree);
    return 0;
}
