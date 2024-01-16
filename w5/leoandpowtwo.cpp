#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007

using namespace std;

/*-------------------SOLBEGIN-------------------*/

string binaryExp(ll n) {
    if (n == 1) return "2";
    if (n % 2 == 0) return "(" + binaryExp(n / 2) + ")^2"; else return "(2*(" + binaryExp(n / 2) + ")^2)";
}

void solve() {
    ll n; cin >> n;
    cout << binaryExp(n) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
