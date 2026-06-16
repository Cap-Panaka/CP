
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    string s;
    cin>>n>>s;
    int count=0;
    for(int i=0;i<n-1;i++) {
        if(s[i]==s[i+1]) {
            count++;
        }
    }
    cout<<count<<'\n';
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

