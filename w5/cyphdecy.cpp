#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define MAX 1000001

using namespace std;

/*-------------------SOLBEGIN-------------------*/

bool prime[MAX];
int pfix[MAX];

void sieve() {
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p < MAX; p++) {
        if (prime[p]) for (int i = p * p; i < MAX; i += p) prime[i] = false;
    }
    for (int i = 2; i < MAX; i++) pfix[i] = pfix[i - 1] + prime[i];
}

void solve() {
    int i, j; cin >> i >> j;
    int res = pfix[j] - (i > 0 ? pfix[i - 1] : 0);
    cout << res << endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve();
    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}
