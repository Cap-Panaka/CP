
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string a,b,c;
    cin>>a>>b>>c;
    a+=b;
    sort(a.begin(),a.end());
    sort(c.begin(),c.end());
    if(a==c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
