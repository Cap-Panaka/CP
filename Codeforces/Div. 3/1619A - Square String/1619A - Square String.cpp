
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
     string s;
    cin>>s;
    if(s.length()%2)
    {
        cout<<"NO"<<endl;
        return;
    }
    string a=s.substr(0, s.length()/2);
    
    string b=s.substr(s.length()/2);
    
    if(a==b) {
    cout<<"YES"<<endl;
    }
    else 
    cout<<"NO"<<endl;
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
