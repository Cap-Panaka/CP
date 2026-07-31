
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    int n;
    cin>>n;
    
    string s;
    cin>>s;

    bool flag[26]={false};

    for(int i=0;i<s.size();i++)
    {
        char c = tolower(s[i]);
        flag[c - 'a'] = true;
    }

    int count =0;
    for(int i=0;i<26;i++)
    {
        if(flag[i])
        {
            count++;
        }

    }


    if(count==26)
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

   // int t = 1;
    //cin >> t;

    //while(t--)
    //{
        solve();
    //}

    return 0;
}
