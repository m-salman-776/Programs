Summpose we need to find GCD(A,B)
/*1.Naive Method 
        In this method we simply try all the numbers right from the min of the two numbers ie min(A,B) to 1
        and check if both A , B are divisible by current number or not if they divisible we break the loop and return the 
        current number from the loop
        Explaination:
                GCD(54,24)  = 6    
                              min(54,24)=24
                              we need to try from 24 23 22 and so on till 1
                              54 % 24 != 0 && 24%24 ==0 (not divisible)
                              54 % 23 != 0 && 24%223 !=0 (not divisible)
                              and so on till both are not divisble
                              
                              54 % 6 == 0 && 24% 6 ==0 (divisible) hence return                      
        */
        /*programm*/
      int GCD(int A, int B)
       {
        int m = min(A, B), gcd;
        for(int i = m; i > 0; --i)
        if(A % i == 0 && B % i == 0)
        {
         gcd = i;
         return gcd;
        }
}
/*Time Complexity:O(min(A,B))

Euclid's Method
        This is recursive solution base on modulous appraoch 
        According to this GCD(A,B) = GCD(B,A%B)*/
        
        int GCD(int A, int B) 
        {
         if(B==0)
             return A;
         else
             return GCD(B, A % B);
        }
        
        
/*Example
If a = 16 and B = 10, then the GCD is computed as follows:

GCD(16, 10) = GCD(10, 16 % 10) = GCD(10, 6)
GCD(10, 6) = GCD(6, 10 % 6) = GCD(6, 4)
GCD(6, 4) = GCD(4, 6 % 4) = GCD(4, 2)
GCD(4, 2) = GCD(2, 4 % 2) = GCD(2, 0)

Time Complexity:O(log(MAX(A,B)))*/

