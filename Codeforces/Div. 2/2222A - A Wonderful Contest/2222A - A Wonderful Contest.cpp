#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int flag =0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a==100) {
                flag=1;
            }
        }

        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }
}