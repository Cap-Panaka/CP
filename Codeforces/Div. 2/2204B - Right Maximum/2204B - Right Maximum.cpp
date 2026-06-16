#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector <int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    int mx=-10000;
    int res=0;
    
    for(int i=0;i<n;i++)
    {
        
        if(ar[i] >= mx) res++;
        mx = max(mx, ar[i]);
    }
    cout << res <<endl ;
}

int main() {
    fast;

    int t = 1;
    cin >> t;
    while(t--)
    {
    solve();
    }

    return 0;
}