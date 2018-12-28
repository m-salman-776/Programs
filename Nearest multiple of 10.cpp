 /*
    Input:
      The first line of input contains an integer T denoting the number of test cases.
      Then T test cases follow. Each test case contains a positive number N.

     Output:
      For each test case, print the nearest multiple of 10 in new line.
      
   */



#include <iostream>
#include<cstring>
using namespace std;

int main() {
    int T;
    std::cin >> T;
    string big_number;
    for(int i=1;i<=T;i++)
    {
        
        cin>>big_number;
        int carry=0;
        int num;
        int length=big_number.length();
        num=big_number[length-1]-48;
        if(num>=0 && num<=5)
        big_number[length-1]=48;
        else
        {
            big_number[length-1]=48;
            carry=1;
            for(int i=length-2;i>=0;i--)
            {
                num=big_number[i]-48;
                num+=carry;
                carry=0;
                if(num>9)
                {
                    carry=num/10;
                    num=num%10;
                }
                big_number[i]=num+48;
                
            }
            char add=0;
            
            if(carry!=0)
            {
            add=carry+48;
            big_number=add+big_number;
            }
        }
        cout<<big_number<<endl;
    }
    
	return 0;
}




/*


Constraints:
1 <= T <= 100
1 <= |Number length| <= 1000

Example:
Input:
2
15
29

Output:
10
30


*/
