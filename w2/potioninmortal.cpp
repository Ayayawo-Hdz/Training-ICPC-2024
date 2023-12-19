#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

int solve(int n, int k) {
    if (n == 1) return 0;
    if (n == k) return -1;
    if (k == 1) return n - 1;
    if (n % k == 0 || n % k == 1) return n/k;
    return n/k + 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    int res = solve(n, k);
    cout << res;

    return 0;
}