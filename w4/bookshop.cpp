#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007

using namespace std;

/*-------------------SOLBEGIN-------------------*/

void solve() {
    int n, x; cin >> n >> x;
    vector<int> h(n), s(n);
    for (auto& i : h) cin >> i;
    for (auto& i : s) cin >> i;
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j - h[i - 1] >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][j - h[i - 1]] + s[i - 1]);
        }
    }
    cout << dp[n][x];
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
