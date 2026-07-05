
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        int x;
        x = s[i] - '0';
        int inv= 9 -x;

        if(i==0 && x==9)
        {
            continue;
        }
        
        if(inv<x)
        {
            s[i] = inv + '0';
        }
    }

    cout<<s<<endl;
    
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
