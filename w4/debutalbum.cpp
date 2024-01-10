#include <iostream>
#include <vector>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007

using namespace std;

/*-------------------SOLBEGIN-------------------*/

void solve() {
    int n, a, b; cin >> n >> a >> b;
    vector<vector<int>> dp(n + 1, vector<int>(3, 0));
    dp[0][1] = 1; dp[0][2] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i][1] = 0; dp[i][2] = 0;
        for (int j = 1; i - j >= 0 && j <= a; j++) 
            dp[i][1] = (dp[i][1] + dp[i - j][2]) % MOD;
        for (int j = 1; i - j >= 0 && j <= b; j++)
            dp[i][2] = (dp[i][2] + dp[i - j][1]) % MOD;
    }
    cout << (dp[n][1] + dp[n][2]) % MOD << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}
