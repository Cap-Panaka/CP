
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    vector<int> v(3);
    for(int i=0;i<3;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    cout<<v[1]-v[0]+v[2]-v[1]<<endl;
  
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
