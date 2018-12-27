#include <iostream>
using namespace std;
void pascal(int n)
{
    
    int arr[n][n];
    for(int line =0; line<n;line++)
    {
        for(int i=0;i<=line;i++)
        {
        if(line==i || i==0)
        arr[line][i]=1;
        else 
        arr[line][i]=arr[line-1][i-1]+arr[line-1][i];
        cout<<arr[line][i]<<" ";
        }
        cout<<endl;
    }
    
}
void constantSpacePascal(int n)
{
    int c;
    for(int line=1;line<=n;line++)
    {
        c=1;
        for(int i=1;i<=line;i++)
        {
            cout<<c<<" ";
            c=c*(line-i)/i;
        }
        cout<<endl;
    }
}
int main() {
	constantSpacePascal(5);
  pascal(5);
  return 0;
}
/*
pascal(int n)=this fuction takes O(n^2) time and uses an additional space of O(n^2) to store the calculated values
constantSpacePascal(int n)=this function use O(n^2) time but use constant space 

*/
