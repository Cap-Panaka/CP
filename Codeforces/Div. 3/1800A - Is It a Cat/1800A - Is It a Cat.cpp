#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++)
    {
        s[i] =tolower(s[i]);
    }
    
    
     s.erase(unique(s.begin(), s.end()), s.end());
    
    if(s=="meow")
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

    int t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}
