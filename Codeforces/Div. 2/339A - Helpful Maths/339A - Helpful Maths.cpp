
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    cin>>s;
    vector<int>a;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            a.push_back(s[i]-'0');
        }
    }

    sort(a.begin(),a.end());

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
        if(i!=a.size()-1)
        {
        cout<<"+";
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
