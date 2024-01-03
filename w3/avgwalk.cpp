#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve() {
    int n, cvnt = 1, sum;
    cin >> n;
    sum = n;
    while (n < 3000) {n += sum; cvnt++; if (cvnt >= 15) {break;}}
    cout << cvnt;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
