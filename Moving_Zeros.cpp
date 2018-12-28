#include <iostream>
using namespace std;
void arrange(int arr[],int n)/* i have witten this fuction because i thoght that its a simple movement of all zeros to last*/
{                             /* and all non-zeros of to begining but that was not the case we  need to pull only zeros to end*/
    int i=0,j=n-1;            /*keeping  all non zeros still*/
    while(j!=0)
    {
        if(arr[i]==0 && arr[j]!=0)
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;j--;
        }
        if(arr[i]!=0 && arr[j]!=0)
        {
            if(arr[i]>arr[j])
            {
            int t= arr[j];
            arr[j]=arr[i];
            arr[i]=t;
            }
            
            i++;
        }
        
        if(arr[j]==0)
        j--;
        
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    // cout<<endl;
        
    }
}
int main() {
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n-1;i++)
    if(arr[i]!=0)
    {
        if(arr[i]==arr[i+1])
        {
        arr[i]=2*arr[i];
        arr[i+1]=0;
        }
    }
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";
    //arrange(arr,n);
    int c=0;
    for(int i=0;i<n;i++) /*this is to simply pull all zeros to end*/ 
    if(arr[i]!=0)       /*not disturbing other elements it will leave counter c to first zero element from there we have*/
    arr[c++]=arr[i];    /*to fill all zeros*/
    while(c<n)
    arr[c++]=0;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    }
	return 0;
}
