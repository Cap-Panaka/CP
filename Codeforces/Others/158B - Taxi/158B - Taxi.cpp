#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve() {
    int n;
    cin >> n;
    int count[5] = {0};
    while (n--) {
        int s;
        cin >> s;
        count[s]++;
    }
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1) {
        total++;
        count[1] -= 2;
    }
    if (count[1] > 0) {
        total += (count[1] + 3) / 4;
    }
    cout << total << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}