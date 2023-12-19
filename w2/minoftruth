#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

void solve(string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            s[n - i - 1] = s[i];
        }
    }
    cout << s;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    solve(s);

    return 0;
}
