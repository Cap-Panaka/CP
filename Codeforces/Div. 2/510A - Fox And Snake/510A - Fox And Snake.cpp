
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= m; j++)
                cout << '#';
        }
        else
        {
            if ((i / 2) % 2 == 1)
            {
                for (int j = 1; j < m; j++)
                    cout << '.';
                cout << '#';
            }
            else
            {
                cout << '#';
                for (int j = 2; j <= m; j++)
                    cout << '.';
            }
        }
        cout << endl;
    
}
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
