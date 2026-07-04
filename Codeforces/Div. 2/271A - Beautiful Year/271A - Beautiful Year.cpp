
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;

    while(true)
    {
        n++;
        string s = to_string(n);

        if(s[0]!=s[1] && s[0]!=s[2] && s[0]!=s[3] && s[1]!=s[2] && s[1]!=s[3] && s[2]!=s[3])
        {
            cout<<n<<endl;
            break;
        }

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
