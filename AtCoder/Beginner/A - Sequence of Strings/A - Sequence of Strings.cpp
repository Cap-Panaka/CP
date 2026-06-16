// https://atcoder.jp/contests/abc284/tasks/abc284_a

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>s;
    
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        s.push_back(temp);
    
    }
    
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<'\n';
    }
    
}