
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   int n;
    cin >> n;

    vector<int> level(n + 1, 0);

    int p;
    cin >> p;

    for(int i = 0; i < p; i++)
    {
        int x;
        cin >> x;
        level[x] = 1;
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        level[x] = 1;
    }

    for(int i = 1; i <= n; i++)
    {
        if(level[i] == 0)
        {
            cout << "Oh, my keyboard!";
            return;
        }
    }

    cout << "I become the guy.";

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
