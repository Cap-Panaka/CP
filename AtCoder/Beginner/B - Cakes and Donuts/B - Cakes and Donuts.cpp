#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(4*i+7*j == n)
            {
                cout<<"Yes";
                return;
            }
        }
    }

    cout<<"No";
    
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