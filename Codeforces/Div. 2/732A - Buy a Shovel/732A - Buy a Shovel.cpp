
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int k,x;
    cin>>k>>x;
    int minimum = INT_MAX;
    for(int i=1;i<=10;i++)
    {
         int last =(k*i)%10;
        if(last%10==0 || last%10==x)
        {
            minimum = min(minimum,i);
        }
    }
    cout<<minimum<<endl;

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
