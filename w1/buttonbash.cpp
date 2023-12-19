#include <bits/stdc++.h>

using namespace std;

void solve(int& n, int& k, vector<int>& b) {
    map<int, int> dp;
    queue<int> q;
    q.push(0);
    dp[0] = 0;
    while (!q.empty()) {
        int fr = q.front();
        q.pop();
        for (int i = 0; i < n; i++) {
            int bck = fr + b[i];
            if (bck < 0) {bck = 0;}
            if (bck > 3600) {bck = 3600;}
            if (dp.count(bck)) {continue;}
            dp[bck] = dp[fr] + 1;
            q.push(bck);
        }
    }
    for (int i = k; i <= 3600; i++) {
        if (dp.count(i)) {
            cout << dp[i] << " " << i - k << "\n";
            return;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        for (auto& it : b) {cin >> it;}
        solve(n, k, b);
    }

    return 0;
}
