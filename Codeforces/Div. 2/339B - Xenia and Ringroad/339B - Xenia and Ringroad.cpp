
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    ll n, m;
    cin >> n >> m;
    
    ll current =1,ans=0;

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
       if(x>current)
       {
              ans+=x-current;
              current=x;
     }
     else if(x<current)
      {
          ans+=n-current+x;
              current=x;
             }
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
