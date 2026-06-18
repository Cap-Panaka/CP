
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    vector<int>ar(4+1);
    for(int i=0;i<4;i++)
    {
        cin>>ar[i];
    }
    int count =0;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                break;
            }
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
