
//https://www.hackerearth.com/problem/algorithm/rhezo-and-big-power/description/

//https://stackoverflow.com/questions/45458628/calculating-a-pow-b-mod-m-for-very-large-a-and-b-stored-in-string
#include <bits/stdc++.h>
using namespace std;
long long int fun(long long int x,int n,int m)
{
    if(n==0)
    return 1;
    else if(n%2==0)
        return fun((x*x)%m,n/2,m);
    else return ((x%m)*(fun((x*x)%m,(n-1)/2,m)%m))%m;
}
int main() {
    int m=1000000007;
    string a,b;
    cin>>a>>b;
    long long  int res=0;
    for(int i=0;i<b.length();i++)
    res=(res*10+b[i]-'0')%(m-1);
    
   long long int x_val=0; // i was in trouble bcoz of this shit long long int 
    for(int i=0;i<a.length();i++)
    x_val=(x_val*10+a[i]-'0')%m;
    //cout<<x_val<<" "<<res<<endl;
    long long int val=fun(x_val,res,m);
    //int val=1;
    // while(res>0)
    // {
    //     if(res%2==1)
    //     val=((val%m)*(x_val%m))%m;
    //     x_val=((x_val%m)*(x_val%m))%m;
    //     res/=2;
    // }
    cout<<val<<endl;
    //cout<<fun(3,4,m)<<endl;
    
	return 0;
}
