
/*NOTE : They only implemented not yet practically varified*/

int minNode(Node *root)
{
    if(root==NULL || root->left==NULL)
    return root;
    return minNode(root->left);
}
int maxNode(Node* root)
{
    if(root==NULL || root->right==NULL)
    return maxNode(root->right);
}
int Height(Node * root)
{
    if(root==NULL)
    return 0;// 0 or 1 this need to review because some author
                // consider leaf node at Height 1 in that case return 1;
    return max(Height(root->left),Height(root->right))+1;
}
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
