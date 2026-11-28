
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   int n;
   cin>>n;
   
   int ans =0;
   for(int i=0;i<n;i++)
   {
    int x1,y1,y2,x2;
    cin>>x1>>y1>>x2>>y2;

    ans += (x2-x1+1)*(y2-y1+1);
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
