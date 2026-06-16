#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    string s;
    cin >> s;

    if(s[0] != 'A')
    {
        cout << "WA" << endl;
        return;
    }

    int cnt = 0;
    int pos = -1;

    for(int i = 2; i < s.size() - 1; i++)
    {
        if(s[i] == 'C')
        {
            cnt++;
            pos = i;
        }
    }

    if(cnt != 1)
    {
        cout << "WA" << endl;
        return;
    }

    for(int i = 1; i < s.size(); i++)
    {
        if(i == pos)
            continue;

        if(isupper(s[i]))
        {
            cout << "WA" << endl;
            return;
        }
    }

    cout << "AC" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}