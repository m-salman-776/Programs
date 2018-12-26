/*Sieve of Eratosthenes

You can use the Sieve of Eratosthenes to find all the prime numbers that are less than or equal to a given number N or to find out whether a number is a prime number.

The basic idea behind the Sieve of Eratosthenes is that at each iteration one prime number is picked up and all its multiples are eliminated. After the elimination process is complete, all the unmarked numbers that remain are prime.

Pseudo code

Mark all the numbers as prime numbers except 1
Traverse over each prime numbers smaller than sqrt(N)
For each prime number, mark its multiples as composite numbers
Numbers, which are not the multiples of any number, will remain marked as prime number and others will change to composite numbers.*/




void sieve(int N) {
        bool isPrime[N+1];
        for(int i = 0; i <= N;++i) {
            isPrime[i] = true;
        }
        isPrime[0] = false;
        isPrime[1] = false;
        for(int i = 2; i * i <= N; ++i) {
             if(isPrime[i] == true) {                    //Mark all the multiples of i as composite numbers
                 for(int j = i * i; j <= N ;j += i)
                     isPrime[j] = false;
            }
        }
    }
    
    
    
    /*Python Code:*/
      
      
      import math as m
      data=[int(x) for x in input().split(' ')]
      number = [True for var in range(data[0]+1)]
      number[0]=False
      number[1]=False
      for i in range(2,int(m.sqrt(data[0]))+1):
      	if number[i]==True:
      		for j in range(i*i,data[0],i):
      			number[j]=False
      
      list_of_prime=[]
      for var in range(data[0]):
      	if number[var]==True:
      		list_of_prime.append(var)
      if data==1:                     #this is to capture when N==1 
          print(0)
      else:
          print(len(list_of_prime))
