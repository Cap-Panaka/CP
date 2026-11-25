
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
    int r=n-1;
    int l=0;

    while(l<r && s[l]!=s[r])
    {
        l++;
        r--;
    }

    cout<< max(0,r-l +1)<<endl;
    
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
