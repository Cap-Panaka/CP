
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
  ll n,m;
  cin>>n>>m;

  ll odd = (n+1)/2;

  if(m<=odd)
  {
    cout<<2*m-1;
  }
  else
  {
    cout<<2*(m-odd);
  }



   


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
