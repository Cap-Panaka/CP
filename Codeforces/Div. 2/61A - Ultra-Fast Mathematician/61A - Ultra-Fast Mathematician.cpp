

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    string n,m,ans="";
    
    cin>>n>>m;
    
    
    for(int i=0;i<n.size();i++)
    {
        if(n[i]==m[i])
        {
            ans+='0';
        }
        else
        {
            ans+='1';
        }
    }
    
    cout<<ans<<endl;
    
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //int t = 1;
    //cin >> t;

    //while(t--)
    //{
        solve();
    //}

    return 0;
}
