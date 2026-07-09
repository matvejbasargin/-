#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<int>> d(n + 1);
 
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        d[a].push_back(b);
        d[b].push_back(a); 
    }
 
    vector<int> dist(n + 1, -1);
 
    queue<int> q;
    dist[k] = 0;
    q.push(k);
 
    while (!q.empty()) {
        int v = q.front();
        q.pop();
 
        for (int to : d[v]) {
            if (dist[to] == -1) {          
                dist[to] = dist[v] + 1;    
                q.push(to);
            }
        }
    }
 
    for (int i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }
    cout << "\n";
 
    return 0;
}
