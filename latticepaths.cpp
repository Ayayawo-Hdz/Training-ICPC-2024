#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int

using namespace std;

// Usando el coeficiente binomial, se puede obtener la cantidad de combinatorias posibles
// dentro del grid. (n k), siendo n la cantidad de movimientos hacía la derecha y abajo.
// n! / k! (n - k)!, pero no sé como hacerlo xd

ull solve(int& gsize) {
    vector<vector<ull>> path(gsize + 1, vector<ull>(gsize + 1, 0));
    path[gsize][gsize] = 1;
    for (int i = gsize; i >= 0; --i) {
        for (int j = gsize; j >= 0; --j) {
            if (i == gsize && j == gsize) {continue;}
            if (i + 1 <= gsize) {path[i][j] += path[i + 1][j];}
            if (j + 1 <= gsize) {path[i][j] += path[i][j + 1];}
        }
    }
    return path[0][0];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int gsize = 20;
    ull res = solve(gsize);
    cout << res;

    return 0;
}
