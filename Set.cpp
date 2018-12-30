#include <iostream>
#include<set>
using namespace std;

int main() {
    int T;
    std::cin >> T;
    for(int i=1;i<=T;i++)
    {
        set<int> st;
        int n,m,p;
        cin>>n>>m;
        int arr[n],arr2[m];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<m;i++)
        cin>>arr2[i];
        cin>>p;
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        st.insert(arr[i]+arr2[j]);
        
        set<int>::iterator itr=st.begin();
        advance(itr,p-1);
        std::cout << *itr << std::endl;
        
        
    }
	return 0;
}
