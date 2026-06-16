

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    string s;
    int LA=0,LB=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A') LA++;
        else if(s[i]=='B') LB++;
        
    }
    
    if(LA>LB) cout<<'A'<<endl;
    else cout<<'B'<<endl;
    
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
