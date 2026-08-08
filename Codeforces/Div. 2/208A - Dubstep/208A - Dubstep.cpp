
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{ 
    string s;
    cin>>s;
    
    string word;
    
    for(int i=0;i<s.size();i++)
    {
         if (s.substr(i, 3) == "WUB"){
        if(!word.empty())
        {
            cout<<word<<" ";
            word.clear();
        }
        i+=2;
    }

  else
    {
        word+=s[i];
    }
    }
    
    
    
    if(!word.empty())
    {
        cout<<word;
    }
    
    cout<<endl;
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
