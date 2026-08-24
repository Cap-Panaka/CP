
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int mx=INT_MIN;

    for(int i=0;i<n;i++)
    {
      mx=max(mx, a[i]);
    }

    int res=0;

    for(int i=0;i<n;i++)
    {
        res+=mx-a[i];

    }

    cout<<res<<endl;
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
