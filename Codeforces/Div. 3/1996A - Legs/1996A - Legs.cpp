
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;

    int count =0;
    if(n%4==0)
    {
        n=n/4;
        count+=n;;
    }
    else 
    {
        n=n/4 +1;
        count+=n;
    }

    


    cout<<count<<endl;

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
