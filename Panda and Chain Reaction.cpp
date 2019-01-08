//https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/panda-and-chain-reaction/description/

// findings in this problem is all about factorial with two fact that while taking modulous of factorial if number greater than modulous then
//it will always zero and another is since we start multiplication from 1 in factorial of number what if we have to start it from 
//  other than 1 i.e from 3 or 4 or somthing else we simply need to multiply that facctorial by number from which we need to count
// also there were some glimses of wislson theorem i dont know as for now
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int m=1000003;
    long long int arr[m+1];
    arr[0]=1;
    arr[1]=1;
    for(int i=2;i<m;i++)
    arr[i]=((i%m)*(arr[i-1]%m))%m;
    for(int i=0;i<t;i++)
    {
        long long int n,x;
        cin>>n>>x;
        if(n>=m)
        cout<<"0"<<endl;
        else cout<<((arr[n]%m)*(x%m))%m<<endl;
    }
}
