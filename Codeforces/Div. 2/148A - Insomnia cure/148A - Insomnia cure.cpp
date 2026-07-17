
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int a,b,c,d,n;
    cin>>a>>b>>c>>d>>n;
    int count =0;
    for(int i=1;i<=n;i++)
    {
        if(i%a==0|| i%b==0 || i%c==0 || i%d==0)
        {
            count++;
        }
    }
    
    cout<<count<<endl;
    
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
