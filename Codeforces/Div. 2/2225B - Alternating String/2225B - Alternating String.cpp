#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    string s;
	cin >> s;
	int ans = 0;
	for (int i = 0;i<s.size()-1;i++){
		ans+=(s[i]==s[i+1]);
	}
	cout << (ans <= 2 ? "YES\n" : "NO\n");
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

