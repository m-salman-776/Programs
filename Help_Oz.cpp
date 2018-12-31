/*


Oz has a list arr[] of M integers. He has to find all integers K such that :

1) K > 1
2) arr[1]%K = arr[2]%K = arr[3]%K = ... = arr[M]%K where '%' is a modulus operator
  Help Oz to find all such K's.




Input :
First line of input contains an integer M. Then M lines follow each containing one integer of the list. Input data is such that at least one integer K will always exist.

Output :
Output all possible integers K separated by space in increasing order.

Constraints :
- 2<= M <=100
- 1< value of each integer <109
- All integers will be distinct


SAMPLE INPUT 
3
38
6
34
SAMPLE OUTPUT 
2 4 



*/



#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    std::cin >> m;
    int arr[m];
    for(int i=0;i<m;i++)
    cin>>arr[i];
    int n=m*(m-1)/2;
    int diff[n]={0};
    int c=0;
    for(int i=0;i<m;i++)
    for(int j=i+1;j<m;j++)
    diff[c++]=abs(arr[i]-arr[j]);
    //sort(diff,diff+n);
    // for(int i=0;i<n;i++)
    // cout<<diff[i]<<" ";
    // cout<<endl;
    set<int> factors;
   // pair<set<int>,bool> ptr;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=sqrt(diff[i]);j++)
        {
            if(diff[i]%j==0)
            {
                int p=diff[i]/j;
                if(p==j)
                factors.insert(j);
                else {
                    factors.insert(j);
                    factors.insert(p);
                }
            }
        }
    }
    set<int>:: iterator itr;
    // for(itr=factors.begin();itr!=factors.end();itr++)
    // cout<<*itr<<" ";
    // cout<<endl;
    factors.erase(1);
    for(itr=factors.begin();itr!=factors.end();itr++)
    {
        int val=*itr;
        //cout<<val<<" ";
        int i;
        int c_val=arr[0]%val;
        for(i=1;i<m;i++)
        {
            
            if(arr[i]%val!=c_val)
            break;
        }
        if(i==m)
        cout<<val<<" ";
    }
    
	return 0;
}
