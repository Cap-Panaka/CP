
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n,m;
    cin>>n>>m;

    string s;
    cin>>s;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;
                
                
            }
        }
    }
    cout<<s<<endl;
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
