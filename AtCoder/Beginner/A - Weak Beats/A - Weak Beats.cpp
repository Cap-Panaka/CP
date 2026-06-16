#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    cin>>s;

    for(int i=1;i<16;i+=2)
    {
        if(s[i]=='1')
        {
            cout<<"No"<<'\n';
            return;
        }
    }
    cout<<"Yes"<<'\n';
    
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