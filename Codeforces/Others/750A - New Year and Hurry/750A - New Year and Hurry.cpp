
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n, m;
    cin>>n>>m;

    int t=240-m;
    int total=0;
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        total+=5*i;
        if(total>t)
        {
            break;
        }
        ans++;
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
