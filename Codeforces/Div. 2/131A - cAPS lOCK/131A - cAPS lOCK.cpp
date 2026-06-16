#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int flag =1;
    for (int i=1;i<s.size();i++) {
        if (s[i]>='a' && s[i]<='z') {
            flag = 0;
        }
    }

    if(flag){
        for (int i=0;i<s.size();i++) {
            if (s[i]>='a' && s[i]<='z') {
                s[i]=toupper(s[i]);
            }else{
                s[i]=tolower(s[i]);
         }
        }
    }

    cout<<s;
}