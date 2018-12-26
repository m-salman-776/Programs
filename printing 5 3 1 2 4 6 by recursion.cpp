#include<bits/stdc++.h>
using namespace std;
void fun(int n)
{
  if(n==0)
    return;
  if(n%2==0)
  {
    fun(n-1);
      cout<<n<<endl;
  }
  else
  {
    cout<<n<<endl;
    fun(n-1);
  }
}
int main() {

	// Write your code here
  int n;
  cin>>n;
  fun(n);
}
