#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int

using namespace std;

/*-------------------SOLBEGIN-------------------*/

void solve() {
    ll c, r, s; cin >> c >> r >> s;
    cout << (((c+r)+s-1)/s) - ((r+s-1)/s) << " " << max(0ll, (((c+r)+s-1)/s) - r) << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}
