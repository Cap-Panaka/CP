#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	
	cin>>n>>m;
	
	int big=max(n,m);
	
	int g = __gcd(7-big, 6); 
	
	int hehe1 = (7-big)/g;
	int hehe2 = 6/g;
	
	cout<<hehe1<<"/"<<hehe2<<endl;
	

}
