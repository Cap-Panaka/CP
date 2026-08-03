
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int count =0;
    string s;
    getline(cin,s);
   sort(s.begin(),s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            count++;

        }
    }
    cout << count << endl;
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
