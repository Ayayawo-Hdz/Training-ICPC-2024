#include <iostream>
#include <algorithm>
#define ll long long int
#define ull unsigned long long int
#define MAX 60000 + 1

using namespace std;

void solve() {
    int n;
    cin >> n;
    int dp[MAX];
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = i;
        for (int j = 1; j * j <= i; ++j) {dp[i] = min(dp[i], dp[i - j * j] + 1);}
    }
    cout << dp[n];
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1;
    while (t--) {solve();}

    return 0;
}
