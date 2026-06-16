#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


void solve()
{ 
    int n,sum=0;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(ar[i]>10)
        {
            sum+=(ar[i]-10);
        }
    }
    
    
    cout<<sum<<'\n';
    
    
    
    
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