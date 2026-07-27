
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    ll n;
    cin>>n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        ll in;
        cin>>in;
        sum+=in;
    }
    cout<<fixed<<setprecision(12)<<sum/n;
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
