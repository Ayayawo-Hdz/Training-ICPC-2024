#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int

using namespace std;

/*-------------------SOLBEGIN-------------------*/
const int maxn = 2e5+10;
int a[maxn], vis[maxn];
vector<int> adj[maxn];
bool shit;

void dfs(int x) {
    if (x == 1) {shit = true; return;}
    if (shit) return;
    if (vis[x]) return;
    vis[x] = 1;
    for (int i = 0; i < adj[x].size(); i++) {
        if (vis[adj[x][i]]) continue;
        dfs(adj[x][i]);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k; cin >> n;
    for (int i = 1; i <= n; i++) {int x; cin >> x; a[x] = i;}
    cin >> k;
    for (int i = 0; i < k; i++) {
        for (int j = 1; j <= n; j++) {int x; cin >> x; adj[j].push_back(x);}
    }
    int x; cin >> x;
    dfs(a[x]);
    if (shit ? cout << "YES" : cout << "NO");

    return 0;
}
