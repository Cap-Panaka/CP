#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
   long long n;
   cin>>n;
   if(n%2==0)
   {
       cout<<n<<endl;
   }
   else
   {
       cout<<2*n<<endl;
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