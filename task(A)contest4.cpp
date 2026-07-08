#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, q;
    cin >> n >> q;
 
    vector<long long> diff(n + 2, 0);
 
    for (int i = 0; i < q; i++) {
        int l, r;
        long long v;
        cin >> l >> r >> v;
        diff[l] += v;
        diff[r + 1] -= v;
    }
 
    long long current = 0;
    for (int i = 1; i <= n; i++) {
        current += diff[i];
        cout << current << (i < n ? " " : "\n");
    }
 
    return 0;
}
