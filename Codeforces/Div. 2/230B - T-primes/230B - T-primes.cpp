
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}


void solve()
{ 
    int n;
    cin>>n;

    while(n--)
    {
        int x;
        cin>>x;
        
        int r = sqrt(x);

        if(r*r == x && isPrime(r))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

       
    }
    
}

signed main()
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
