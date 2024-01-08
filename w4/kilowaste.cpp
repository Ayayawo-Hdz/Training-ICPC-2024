#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int

using namespace std;

/*-------------------SOLBEGIN-------------------*/

const int maxn = 50100;
int dp[maxn];

void solve() {
    int k, p, x; cin >> k >> p;
    for (int i = 1; i <= p; i++) {
        cin >> x;
        for (int j = x; j <= maxn; j++) dp[j] = max(dp[j], dp[j - x] + x);
    }
    while (k--) {
        cin >> x;
        for (int i = x; i <= maxn; i++) {
            if (dp[i] >= x) {cout << dp[i] - x << endl; break;}
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
