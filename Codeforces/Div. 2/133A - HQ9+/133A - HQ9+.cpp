
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    cin>>s;
    bool flag = false;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9' )
        {
            flag = true;
            break;
        }
    }

    if(flag)
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
