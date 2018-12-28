/*

Input:

The first line of input contains an integer T denoting the number of test cases. 
Then T test cases follow.
Each test case contains two numbers X and Y.

Output:
For each test case, print the required answer.

Constraints:
1<=T<=500
1<=|Digits in X,Y|<=100


*/



#include <bits/stdc++.h>
using namespace std;

string sub(string str1,int start,int end)
{
    string result="";
    for(int i=start;i<end;i++)
    result=result+str1[i];
    return result;
}

string reverseStr(string s)
{
    int len=s.length();
    string re="";
    int i=0;
    for(int i=0;i<len;i++)
    re=s[i]+re;
    return re;
}
int main() {
    int T;
    string X,Y;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
       string SUM="";
        std::cin >> X>>Y;
        int lenght_x=X.length();
        int lenght_y=Y.length();
         int itr;
        if(lenght_x<lenght_y)
            cout<<X<<endl;
        else if(lenght_y==lenght_x)
        {
            int carry=0;
            int num=0;
            for(int i=lenght_x-1;i>=0;i--)
            {
                num=(X[i]-48)+(Y[i]-48);
                num+=carry;
                carry=num/10;
                num=num%10;
                char c=num+48;
                SUM=c+SUM;
            }
            if(carry==1)
            cout << X <<endl;
            else
            cout<<SUM<<endl;
        }
        else 
        {
            string sum="";
            int carry=0;
            int num=0;
            int l=lenght_x-lenght_y;
            for(int i=0;i<l;i++)
            Y='0'+Y;
            for(int i=lenght_x-1;i>=0;i--)
            {
                num=(X[i]-48)+(Y[i]-48);
                num+=carry;
                carry=num/10;
                num=num%10;
                char c=num+48;
                sum=c+sum;
            }
            if(sum[0]!='0')
            cout<<sum<<endl;
            else cout<<X<<endl;
        }
        
    }
	return 0;
}




/*


Example:
Input:
2
25 23
100 1000

Output:
48
100


*/
