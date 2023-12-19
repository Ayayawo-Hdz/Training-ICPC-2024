#include <bits/stdc++.h>

using namespace std;

// Sumatoria Gauss p/ cantidad de mensajes
long long get(int x) {
    return x * 1ll * (x + 1) / 2;
}

void solve() {
    int k;
    long long x;
    cin >> k >> x;
    // Apuntador a los límites de la sucesión
    long long l = 1, r = 2 * k - 1;
    // Cantidad total de mensajes
    long long res = 2 * k - 1;
    bool end = false;
    // Búsqueda binaria
    while (l <= r) {
        int m = (l + r) >> 1;
        // Se añaden (k - 1), (k - 1) . . . (y - k). Quedando: k + (k - 1) - (2 * k - 1 - m) >= x
        if (m >= k) {end = (get(k) + get(k - 1) - get(2 * k - 1 - m) >= x);} else {end = (get(m) >= x);}
        if (end) {res = m; r = m - 1;} else {l = m + 1;}
    }
    cout << res << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;

    while (t--) {solve();}
    
    return 0;
}
