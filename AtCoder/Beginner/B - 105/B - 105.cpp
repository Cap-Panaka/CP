#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    int ans =0;
    
    for(int i=1;i<=n;i+=2)
    {
        int count = 0;
        for(int j=1;j<=i;j++)
        if(i%j==0)
        {
            
            count++;
        }
        
        if(count == 8)
        {
            ans++;
        }
    }
    
    cout<<ans<<'\n';
    
    
     
    
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