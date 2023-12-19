#include <bits/stdc++.h>

using namespace std;

vector<int> mach;
long long int prod_time(long long int sec) {
    long long int tot = 0;
    for (int m: mach) {tot += sec / m;}
    return tot;
}

void solve() {
    long long int n, t, e;
    cin >> n >> t;
    while (mach.size() < n) {cin >> e; mach.push_back(e);}

    long long int l = 0, r = *min_element(mach.begin(), mach.end()) * t, m;
    long long int act_prod;
    long long int res = 0;

    while (l < r) {
        m = (l + r) / 2LL;
        act_prod = prod_time(m);
        if (act_prod < t) {l = m + 1;}
        if (act_prod > t) {res = m; r = m;}
        if (act_prod == t) {res = m; r = m;}
    }

    act_prod = prod_time(l);
    if (act_prod >= t) {res = l;}
    cout << res;

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}
