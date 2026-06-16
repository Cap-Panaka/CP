

#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
   int n,count=0;
	
	cin>>n;
	
	while (n >= 100) {
        n -= 100;
        count++;
    }
    
    while (n >=20) {
        n -=20;
        count++;
    }
     while (n >=10) {
        n -=10;
        count++;
    }
    while (n >=5) {
        n -=5;
        count++;
    }
    
    while (n >=1) {
        n -=1;
        count++;
    }
    
    cout<<count<<endl;
}
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
        
}
