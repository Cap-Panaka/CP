#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int cnt = 0;
int ans= 0;
bool flag = false;
void solve()
{ 
    int n;
    cin>>n;
    if(n==-1)
    {
        if(cnt==0)
        {
            ans++;
        }
        else
        {
            cnt--;
        }
    }
    else
    {
        cnt+=n;
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
    cout<<ans<<endl;

    return 0;
}