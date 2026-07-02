
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    int big = INT_MAX;

    for(int i=0;i<=m-n;i++)
    {
        big = min(big,a[i+n-1]-a[i]);
    }

    cout<<big<<endl;
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
