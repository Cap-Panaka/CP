

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int count=0;
    while(n)
    {
        if(n&1)
        {
            count++;
            
        }
        n>>=1;
    }
    
    cout<<count<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //int t = 1;
    //cin >> t;

    //while(t--)
    //{
        solve();
    //}

    return 0;
}
