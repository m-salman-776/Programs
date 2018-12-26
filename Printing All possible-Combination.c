void combiUtility(int arr[],int i,int n,int data[],int index,int r)
{
	if(index==r) //if index is equals to relquired length then print
	{
		for(int j=0;j<r;j++)
		printf("%d ",data[j]);
		printf("\n");
		return;
	}
	if(i>=n)
	return;
	data[index]=arr[i];
	combiUtility(arr,i+1,n,data,index+1,r);
	while (arr[i] == arr[i+1])//this part is not required if numbers are unique
             i++; // moreover this is added to get rid of duplicates i.e  {1,2} and {2,1} are same 
	combiUtility(arr,i+1,n,data,index,r);
}
void combination(int arr[],int n,int r)
{
	int data[r];  // for holding number till no now
	combiUtility(arr,0,n,data,0,r);
}
int main()
{
	int arr[] = {1, 2, 3, 4, 5}; 
    int r = 3; 
    int n = sizeof(arr)/sizeof(arr[0]); 
	combination(arr,n,r);//function call
	
}
