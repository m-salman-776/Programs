/*
here is the link for the question 
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/the-confused-monk/
*/
#include <iostream>
using namespace std;

long long fun(long long x,long long n)   /// initial approach i find difficult with those many zeros
{
    if(n==0)
    return 1;
    else if(n%2==0)
    {
        return fun(((x%1000000007)*(x%1000000007)%1000000007),n/2);
    }
    else return (x%1000000007)*fun(((x%1000000007)*(x%1000000007)%1000000007),(n-1)/2);
}

long long fun2(long long x,long long n,int m) ///new approach easy to handle because of that big modulo handling
{
    if(n==0)
    return 1;
    else if(n%2==0)
    return fun2((x*x)%m,n/2,m);
    else return(x*fun2((x*x)%m,(n-1)/2,m))%m;
}



int gcd(int a,int b)
{
    if(b==0)
    return a;
    else return gcd(b,a%b);
}


int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	std::cin >> arr[i];
	int val_gcd=0;
	long long fx=1;
	for(int i=0;i<n;i++)
	{
	    fx=(fx*arr[i])%1000000007;
	    val_gcd=gcd(arr[i],val_gcd);
	}
	
	std::cout << fun2(fx,val_gcd,1000000007) << std::endl;
	return 0;
}
