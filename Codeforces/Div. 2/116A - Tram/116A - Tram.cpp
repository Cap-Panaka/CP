
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int t;
    cin>>t;
    int sum;
    int sub;
    int mx=INT_MIN;
    int total=0;
    while(t--)
    {
        cin>>sub>>sum;
        total+=sum;
        total-=sub;
       // cout<<total<<endl;
        mx = max(mx,total);

        
    }
    cout<<mx<<endl;
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
