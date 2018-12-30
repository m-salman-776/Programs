/*

Input:
The first line of input contains an integer T denoting the number of test cases.
Each test case contains two space separated strings.

Output:
Output the length of the required string.

Constraints:
1<=T<=100

Example:
Input:
2
abcd xycd
efgh jghi
Output:
6
6



*/



#include <iostream>
#include<cstring>
using namespace std;
int fun(string str1,string str2,int l1,int l2)
{
    if(l1==0)
    return l2;
    else if(l2==0)
    return l1;
    else if(str1[l1-1]==str2[l2-1])
    return 1+fun(str1,str2,l1-1,l2-1);
    else return 1+max(fun(str1,str2,l1,l2-1),fun(str1,str2,l1-1,l2));
}
int lcs(string str1,string str2,int l1,int l2)
{
    int arr[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        if(i==0 || j==0)
        arr[i][j]=0;
        else if(str1[i-1]==str2[j-1])
        arr[i][j]=arr[i-1][j-1]+1;
        else arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
    }
    // for(int i=0;i<=l1;i++)
    // {
    //     for(int j=0;j<=l2;j++)
    //     cout<<arr[i][j]<<" ";
    //     cout<<endl;
    // }
    
    return arr[l1][l2];
}
int main() {
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
    string str1,str2;
    std::cin >> str1>>str2;
    cout<<str1.length()+str2.length()-lcs(str1,str2,str1.length(),str2.length())<<endl;
    //std::cout << fun(str1,str2,str1.length(),str2.length()) << std::endl;
    }
	return 0;
}
