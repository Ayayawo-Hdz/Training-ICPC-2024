#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
const int maxn = 2e5 + 9;

using namespace std;

int b[maxn], d[maxn], sz[maxn], cvnt;
vector<int> adj[maxn];

void dfs(int x) {
    b[d[x] = ++cvnt] = x;
    sz[x] = 1;
    for (auto& y : adj[x]) {dfs(y); sz[x] += sz[y];}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    for (int i = 2; i <= n; i++) {int p; cin >> p; adj[p].push_back(i);}
    dfs(1);
    while (q--) {
        int u, k;
        cin >> u >> k;
        if (k > sz[u]) {cout << -1 << '\n'; continue;}
        cout << b[d[u] + k - 1] << '\n';
    }

    return 0;
}
