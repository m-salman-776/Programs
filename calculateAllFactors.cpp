/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include<cmath>
using namespace std;
/*for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                printf("%d ", i); 
  
            else // Otherwise print both 
                printf("%d %d ", i, n/i); 
        } 
    } */

int main() {
	int T;
	std::cin >> T;
	int count;
	int num;
	for(int i=1;i<=T;i++)
	{
	    cin>>num;
	    count=0;
	    for(int j=1;j<=sqrt(num);j++)
	    if(num%j==0)
	    {
	        if(num/j==j)
	        count++;
	        else count+=2;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
