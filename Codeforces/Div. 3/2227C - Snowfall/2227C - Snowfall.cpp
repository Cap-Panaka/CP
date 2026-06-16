#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    
     long long n;
    cin>>n;
    vector<long long>v(n),six,two,three,none;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]%6==0)
        {
            six.push_back(v[i]);
        }
        else if(v[i]%2==0)
        {
            two.push_back(v[i]);
        }
        else if(v[i]%3==0)
        {
            three.push_back(v[i]);
        }
        else
        {
            none.push_back(v[i]);
        }
    }
    for (int n : six) cout << n << " ";
    for (int n : two) cout << n << " ";
    for (int n : none) cout << n << " ";
    for (int n : three) cout << n << " ";
    
    cout<<endl;
    }

    return 0;
}