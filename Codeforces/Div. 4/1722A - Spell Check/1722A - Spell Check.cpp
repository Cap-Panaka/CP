#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    int n;
        string s;
        cin >> n >> s;
        string s1 = "Timur";
        if (n != 5)
        {
        cout << "NO" << endl;
        continue ;
        }
        sort(s.begin(), s.end());
        sort(s1.begin(), s1.end());
        if (s1 == s) cout << "YES" << endl;
        else cout << "NO" << endl;
	    
	    
	    
	    
	}

}
