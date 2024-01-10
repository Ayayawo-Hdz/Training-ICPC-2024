#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007

using namespace std;

/*-------------------SOLBEGIN-------------------*/

const int maxn = 1e6 + 100;
int dp[maxn];

void solve() {
    int n, x; cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) cin >> coins[i];
    dp[0] = 0;
    for (int i = 1; i <= x; i++) {
        dp[i] = maxn;
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i) {dp[i] = min(dp[i], dp[i - coins[j]] + 1);}
        }
    }
    if (dp[x] != maxn ? cout << dp[x] : cout << -1);
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
