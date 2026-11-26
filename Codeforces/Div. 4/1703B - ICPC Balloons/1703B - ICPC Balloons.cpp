
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;

    string s;
    cin>>s;

    bool vis[26] = {false};
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        int id = s[i]-'A';

        if(vis[id]==false)
        {
            ans+=2;
            vis[id] = true;
        }
        else
        {
            ans+=1;
        }

    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
