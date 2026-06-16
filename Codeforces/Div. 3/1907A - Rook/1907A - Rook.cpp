#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
        cin >>s;
 
      for(int i = 1; i <= 8; i++){
        if(i == (s[1] - '0')) continue;
        cout << s[0] << i << endl;
      }
  
 
        char a = 'a';
    for(int i = 0; i < 8; i++){
        if(a + i == s[0]) continue;
        cout << char(a + i) << s[1] << endl;
    }
 
 
 
}
	    
	}




