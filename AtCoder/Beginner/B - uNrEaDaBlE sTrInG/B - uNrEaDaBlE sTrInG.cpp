#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    cin>>s;
    string sc=s;

    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            sc[i]=tolower(sc[i]);
        }
        else
        {
            sc[i]=toupper(sc[i]);
            
        }
    }


    for(int i=0;i<s.size();i++)
    {
        if(sc[i]!=s[i])
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