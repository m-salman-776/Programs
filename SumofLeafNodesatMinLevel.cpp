/*
https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes-at-min-level/1
*/

/*
findVal() this function will recursively add all nodes of same height at its height index in extra space 
from this array we can get sum of all nodes till given height
*/

pair<int,int> findValPair(Node* root,int n)
{
    if(root->left==NULL && root->right==NULL)
    return {n,root->data};
    else if(root->left==NULL)
    return findValPair(root->right,n-1);
    else if(root->right==NULL)
    return findValPair(root->left,n-1);
    else 
    {
        auto x=findValPair(root->left,n-1);
        auto y=findValPair(root->right,n-1);
        if(x.first==y.first)
        return {x.first,x.second+y.second};
        else if(x.first>y.first)
        return x;
        else return y;
    }
    
    
    /*
    following lines are needed to be written in main function 
    if(root==NULL)
    return 0;
    return findValPair(root,1000).second;
    this implementation  does not need any extra space for
    */
    
}


void findVal(Node * root,int arr[],int maxHeight)
{
    if(root->left==NULL && root->right==NULL)
        arr[maxHeight-1]+=root->data;
    else if(root->left==NULL)
        findVal(root->right,arr,maxHeight-1);
    else if(root->right==NULL)
        findVal(root->left,arr,maxHeight-1);
    else {
        findVal(root->left,arr,maxHeight-1);
        findVal(root->right,arr,maxHeight-1);
    }
}
int minLeafSum(Node* root)
{
    if(root==NULL)
    return 0;
	int arr[1001]={0};
	findVal(root,arr,1000);
	int x;
	for(int i=1000;i>=0;i--)
	{
	    if(arr[i]>0)
	    {
	        x=arr[i];
	        break;
	    }
	}
	return x;
}
