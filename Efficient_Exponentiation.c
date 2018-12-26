/*Optimized method

While calculating , the basis of Binary Exponentiation relies on whether the power is odd or even.

If  is even, replace  by  (x*x)^N/2
If  is odd, replace  by x*fun(x*x)^(N-1)/2
You are required to compute . The steps are as follows:

This is an efficient method and the ten-step process of determining  is reduced to a three-step process. At every step,  is divided by . Therefore, the time complexity is O(log N).

The code for the process is as follows:*/

int binaryExponentiation(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return binaryExponentiation(x*x,n/2);
    else                             //n is odd
        return x*binaryExponentiation(x*x,(n-1)/2);
}


/*Some time we may require calculate only modulous of the exponet then we do not need to calculate whole thing to get modulous 
we simple modify the code in following manner*/

int modularExponentiation(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

/*Time complexity: O(log N)
Memory complexity: O(log N) because a function call consumes memory and log N recursive function calls are made*/



/*Or we can use yet another method for modular exponentiation given below*/

int power(int a, unsigned int n, int p) 
{ 
	int res = 1;	 // Initialize result 
	a = a % p; // Update 'a' if 'a' >= p 

	while (n > 0) 
	{ 
		// If n is odd, multiply 'a' with result 
		if (n & 1) 
			res = (res*a) % p; 

		// n must be even now 
		n = n>>1; // n = n/2 
		a = (a*a) % p; 
	} 
	return res; 
} 

