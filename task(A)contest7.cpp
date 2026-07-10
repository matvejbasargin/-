#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m, s;
    cin >> n >> m >> s;
 
    vector<int> u(m), v(m);
    vector<long long> w(m);
    for (int i = 0; i < m; i++) {
        cin >> u[i] >> v[i] >> w[i];
        u[i]--; v[i]--; 
    }
    s--;
 
    const long long INF = LLONG_MAX / 2;
    vector<long long> d(n, INF);
    d[s] = 0;
 
    for (int it = 0; it < n - 1; it++) {
        bool upd = false;
        for (int i = 0; i < m; i++) {
            if (d[u[i]] < INF && d[u[i]] + w[i] < d[v[i]]) {
                d[v[i]] = d[u[i]] + w[i];
                upd = true;
            }
        }
        if (!upd) break; 
    }
 
    vector<bool> bad(n, false);
    for (int i = 0; i < m; i++) {
        if (d[u[i]] < INF && d[u[i]] + w[i] < d[v[i]]) {
            bad[v[i]] = true;
        }
    }
 
    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        g[u[i]].push_back(v[i]);
    }
 
    queue<int> q;
    for (int i = 0; i < n; i++) {
        if (bad[i]) q.push(i);
    }
    while (!q.empty()) {
        int x = q.front(); q.pop();
        for (int y : g[x]) {
            if (!bad[y]) {
                bad[y] = true;
                q.push(y);
            }
        }
    }
 
    bool neg = false;
    for (int i = 0; i < n; i++) {
        if (bad[i]) { neg = true; break; }
    }
 
    if (neg) {
        cout << "Negative cycle\n";
        return 0;
    }
 
    for (int i = 0; i < n; i++) {
        if (d[i] >= INF) cout << "inf";
        else cout << d[i];
        cout << (i + 1 < n ? ' ' : '\n');
    }
 
    return 0;
}
