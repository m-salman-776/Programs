/*


nput:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. 
Each test case contains two integer N and M as input.

Output:
For each test case, In new line print the count of carries.

Constraints:
1<=T<=1000
1<=N,M<=1018

Example:
Input:
2
345 234
2345 535

Output:
0
1



*/



#include <iostream>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	string num1,num2;
	for(int t=1;t<=T;t++)
	{
	    cin>>num1>>num2;
	    int num1_len=num1.length();
	    int num2_len=num2.length();
	    if(num1_len>num2_len)
	    {
	        int dif=num1_len-num2_len;
	        for(int i=0;i<dif;i++)
	        num2='0'+num2;
	    }
	    else {
	        int dif=num2_len-num1_len;
	        for(int i=0;i<dif;i++)
	        num1='0'+num1;   
	    }
	    //cout<<num1<<" "<<num2;
	    int carry=0;
	    int c=0;
	    //cout<<num1.length()<<endl;
	    for(int i=num1.length()-1;i>=0;i--)
	    {
	        int num=(num1[i]-48)+(num2[i]-48)+carry;
	        carry=0;
	        if(num>9 && num<=19)
	        {
	            carry+=1;
	            c++;
	        }
	        //cout<<carry<<endl ;
	    }
	    std::cout << c << std::endl;
	}
	return 0;
}
