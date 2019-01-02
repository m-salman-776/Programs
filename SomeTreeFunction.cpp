
/*NOTE : They only implemented not yet practically varified*/
int internalNode(Node * root)
{
    if(root==NULL)
    return 0;
    if( root->left==NULL || root->right==NULL)
    return 0;
    return internalNode(root->left)+internalNode(root->right)+1;
}
int totalNode(Node * root)
{
    if(root==NULL)
    return 0;
    return totalNode(root->left)+totalNode(root->right)+1;
}
int externalNode(Node * root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL || root->right==NULL)
    return 1;
    return externalNode(root->left)+externalNode(root->right);
}


/*right from there all are verifed practically*/

#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node * left;
    Node * right;
};
 Node * insert( Node * root,int val)
{
    Node * node=( Node *)malloc(sizeof( Node));
    node->data=val;
    node->left=node->right=NULL;
    if(root==NULL)
    return node;
    if(root->data>val)
    root->left=insert(root->left,val);
    else if(root->data<val)
    root->right=insert(root->right,val);
    return root;
}
Node * search(Node * root,int val)
{
    if(root==NULL || root->data==val)
    return root;
    if(root->data > val)
    return search(root->left,val);
    else return search(root->right,val);
}
void inorder(Node * root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    std::cout << root->data<<" ";
    inorder(root->right);
}
int Height(Node * root)
{
    if(root==NULL)
    return 0;
    int left=Height(root->left);
    int right=Height(root->right);
    return max(left,right)+1;
}
Node * minVal(Node * root)
{
    if(root==NULL || root->left==NULL)
    return root;
    return(minVal(root->left));
}
Node * maxVal(Node * root)
{
    if(root==NULL || root->right==NULL)
    return root;
    return maxVal(root->right);
}
int main() {
    struct Node * root=NULL;
    int arr[]={1,5,9,6,3,4,7,10,1,5,49,36,35,89,37,20,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    root=insert(root,arr[i]);
    root=insert(root,2);
    inorder(root);
    cout<<endl;
    cout<<Height(root)<<endl;
    Node * s=search(root,50);
    if(s)
    cout<<s->data<<endl;
    cout<<minVal(root)->data<<endl;
    cout<<maxVal(root)->data<<endl;
	return 0;
}



