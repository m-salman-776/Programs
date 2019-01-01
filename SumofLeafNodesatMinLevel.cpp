/*
https://practice.geeksforgeeks.org/problems/sum-of-leaf-nodes-at-min-level/1
*/

/*
findVal() this function will recursively add all nodes of same height at its height index in extra space 
from this array we can get sum of all nodes till given height
*/

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
