#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve(vector<ll>& emp, vector<ll>& score, ll x) {
    auto it = upper_bound(emp.begin(), emp.end(), x);
    ll q = distance(it, emp.end());
    ll i = distance(emp.begin(), it);
    ll pts = q * x;
    if (i > 0) {pts += score[i - 1];}
    cout << pts << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;
    vector<ll> emp(n), score(n);
    for (ll i = 0; i < n; i++) {int x; cin >> x; emp[i] = x;}
    sort(emp.begin(), emp.end());
    for (ll i = 0; i < n; i++) {
        if (i == 0) score[i] = emp[i]; else score[i] = score[i - 1] + emp[i];
    }
    while (m--) {
        ll x;
        cin >> x;
        solve(emp, score, x);
    }

    return 0;
}
