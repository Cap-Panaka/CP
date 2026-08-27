
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int a,b,c;
    cin>>a>>b>>c;
    int ana= a+(c+1)/2;
    int kat=b+c/2;
    if(ana>kat)
    {
        cout<<"First"<<endl;
    }
    else 
    {
        cout<<"Second"<<endl;
    }

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
