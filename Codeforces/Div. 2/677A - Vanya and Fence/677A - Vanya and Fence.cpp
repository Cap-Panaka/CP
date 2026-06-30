
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,m;
    cin>>n>>m;
    int ans = n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ans+=(x>m);
    }

    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

   // int t = 1;
    //cin >> t;

    //while(t--)
    //{
        solve();
    //}

    return 0;
}
