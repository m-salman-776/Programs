/*Optimized method

While calculating , the basis of Binary Exponentiation relies on whether  is odd or even.

If  is even, then  can be broken down to . Programmatically, finding  is a one-step process. However, the problem is to find .

Notice how the computation steps were reduced from  to  in just one step? You can continue to divide the power by  as long as it is even.

When  is odd, try and convert it into an even value.  can be written as . This ensures that  is even.

If  is even, replace  by .
If  is odd, replace  by .  becomes even and you can apply the relevant formula.
Example

You are required to compute . The steps are as follows:

The power of  is , which is even. Break it down as follows:
Find . The power of  is , which is odd. Convert it into an even power and then apply the following formula:
 is a one-step computation process
The result is .
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

Time complexity: O(log N)
Memory complexity: O(log N) because a function call consumes memory and log N recursive function calls are made
