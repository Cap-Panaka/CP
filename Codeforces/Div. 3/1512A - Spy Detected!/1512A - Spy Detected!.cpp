#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    int n,temp;
    cin>>n;
    vector<int>ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    vector<int> copy_ar = ar ;
    sort(copy_ar.begin(),copy_ar.end());
    for(int i=0;i<n;i++) if(ar[i]!=copy_ar[1]) temp = i+1; 
    
    cout<<temp<<'\n';
    
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

    return 0;
}

