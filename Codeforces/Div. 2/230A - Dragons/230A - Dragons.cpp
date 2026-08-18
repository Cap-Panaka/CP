
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int s,n;
    cin>>s>>n;

    vector<pair<int,int>> dragons(n);

    for(int i=0;i<n;i++)
    {
        cin>>dragons[i].first>>dragons[i].second;
    }

    sort(dragons.begin(),dragons.end());

    for(int i=0;i<n;i++)
    {
        int x=dragons[i].first;
        int y=dragons[i].second;

        if(s<=x)
        {
            cout<<"NO";
            return;
        }
        else
        {
            s+=y;
        }
    }
    cout<<"YES";
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
