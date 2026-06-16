#include <bits/stdc++.h>
using namespace std;

int main() {
	 long long n;
    cin>>n;
    int count=0;
    while(n>0){
        int a=n%10;
        if(a==7||a==4){
                count++;
        }
        n/=10;
    }
    if(count==7||count==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
