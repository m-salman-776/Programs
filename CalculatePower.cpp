/*
here the link for question:
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/calculate-the-power/
*/


/*

Given two number A and B. Calculate the value of AB. Output may be too large so print the answer modulo 10^9+7.

Input: 
Input contains two integers A and B separated by space.

Output:
Print value of AB modulo 10^9+7.

Constraints:
Test File 1 to 5: 
1<=A<=10 
1<=B<=10

Test File 6 to 10: 
1<=A<=106 
1<=B<=1010

*/





#include <iostream>
using namespace std;
long long int fun2(long long int x,long long int n,int m)
{
    x=x%m;
    if(n==0)
    return 1;
    else if(n%2==0)
    return fun2((x*x)%m,n/2,m);
    else return(x*fun2((x*x)%m,(n-1)/2,m))%m;
}


int main() {
	long long int n,x;
	std::cin >> x>>n;
	std::cout << fun2(x,n,1000000007) << std::endl;
	return 0;
}
