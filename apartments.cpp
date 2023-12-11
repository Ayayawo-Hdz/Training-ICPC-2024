#include <bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

int solve(ull& n, ull& m, ull& k, vector<ull>& a, vector<ull>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ptrx = 0, ptry = 0, x = 0;
    while (ptrx < n && ptry < m) {
        int dsize = a[ptrx];
        int asize = b[ptry];
        if (abs(dsize - asize) <= k) {x++; ptrx++; ptry++;} else 
        if (dsize < asize ? ptrx++ : ptry++); 
    }
    return x;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ull n, m, k;
    cin >> n >> m >> k;
    vector<ull> a(n);
    vector<ull> b(m);
    for (auto& it : a) {cin >> it;}
    for (auto& it : b) {cin >> it;}
    int res = solve(n, m, k, a, b);
    cout << res;
    return 0;
}
