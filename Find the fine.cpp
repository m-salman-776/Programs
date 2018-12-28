/*The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case 
consists of three lines of input. First line of each test case contains two integers N & D, second line contains N space
separated car numbers C and third line contains N space separated penalties P.*/
/*Example:
Input:
2
4 12
2375 7682 2325 2352
250 500 350 200
3 8
2222 2223 2224
200 300 400
Output:
600
300*/

#include <iostream>
using namespace std;

int main() {
    int T,N,D;
    int penality_val;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>N;
        cin>>D;
        int c_number[N];
        int penality[N];
        for(int i=0;i<N;i++)
        cin>>c_number[i];
        
        for(int i=0;i<N;i++)
        cin>>penality[i];
        penality_val=0;
        if(D%2==0)
        {
            for(int i=0;i<N;i++)
            if(c_number[i]%2!=0)
            penality_val+=penality[i];
        }
        else
        {
            for(int i=0;i<N;i++)
            if(c_number[i]%2==0)
            penality_val+=penality[i];
        }
        std::cout << penality_val << std::endl;
        
    }
	return 0;
}
