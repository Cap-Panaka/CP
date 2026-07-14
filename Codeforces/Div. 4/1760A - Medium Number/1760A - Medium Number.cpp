
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    vector<int>a;
    for(int i=0;i<3;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    
    sort(a.begin(),a.end());
    
    cout<<a[1]<<endl;
    
    
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
