#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve() {
    int n, m, k, t, res = 0, i = 0;
    vector<int> p, v;
    cin >> n >> m >> k >> t;
    for (int i = 0; i < n; i++) {int x; cin >> x; p.push_back(x);}
    for (int i = 0; i < m; i++) {int x; cin >> x; v.push_back(x);}
    sort(p.begin(), p.end());
    sort(v.begin(), v.end());
    for (int j = 0; j < m; j++) {
        int x = k;
        while (i < n && p[i] - t <= v[j] && x) {
            if (p[i] + t >= v[j]) {res++; x--;}
            i++;
        }
        if (i == n) {break;}
    }
    cout << res;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
