
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    int maxPos=0;
    int minPos=0;

    for(int i=0;i<n;i++)
    {
        if(ar[i]>ar[maxPos])
        {
            maxPos=i;
        }

        if(ar[i]<=ar[minPos])
        {
            minPos=i;
        }

    }
    int ans = maxPos + (n-1-minPos);
    if(maxPos>minPos)
    {
        ans--;
    }
    cout<<ans<<endl;

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
