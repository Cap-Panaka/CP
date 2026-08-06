#include <bits/stdc++.h>
using namespace std;
int a=0;
int b=0;
int c=0;

#define ll long long
#define endl '\n'

void solve()
{ 
    int x, y, z;
    cin>>x>>y>>z;
    a+=x;
    b+=y;
    c+=z;

    
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

    if(a==0 && b==0 && c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}