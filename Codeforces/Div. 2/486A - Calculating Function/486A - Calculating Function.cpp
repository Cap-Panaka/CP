#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
 long long n;
 cin>>n;
 if(n%2)
 {
     cout<<-(n-1)/2 -1<<endl;
 }
 else 
 {
     cout<<(n)/2<<endl;
 }
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        solve();
    

    return 0;
}

