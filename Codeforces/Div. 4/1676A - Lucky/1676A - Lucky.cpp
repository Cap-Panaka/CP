
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    int sumLast=0,sumFirst=0;
    cin>>s;
    for(int i=0;i<3;i++)
    {
        sumFirst +=(s[i]-'0');
    }
    
    
    for(int i = s.size()-1;i>s.size()-4;i--)
    {
        sumLast += (s[i]-'0');
    }
    
    
    if(sumFirst == sumLast)
    {
        cout<<"YES"<<endl;
    }
    
    else
    {
        cout<<"NO"<<endl;
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
