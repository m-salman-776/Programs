#include <iostream>
#include<cstring>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	string str1,str2;
	for(int t=1;t<=T;t++)
	{
	    int len1,len2;
	    cin>>len1>>len2;
	    cin>>str1>>str2;
	    int res=0;
	    int arr[len1+1][len2+1];
	    for(int i=0;i<=len1;i++)
	    {
	        for(int j=0;j<=len2;j++)
	        {
	            if(i==0 || j==0)
	            arr[i][j]=0;
	        else if(str1[i-1]==str2[j-1])
	        {
	            arr[i][j]=arr[i-1][j-1]+1;
	            res=max(res,arr[i][j]);
	        }
	        else
	            arr[i][j]=0;
	        }
	    }
	    for(int i=0;i<=len1;i++)
	    {
	    for(int j=0;j<=len2;j++)
	    cout<<arr[i][j]<<" ";
	    cout<<endl;
	    }
	    
	    std::cout <<  res << std::endl;
	}
	return 0;
}
