#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    long long ans, t;
    cin >> ans;
    for (int i = 1; i < n; i++) {
        cin >> t;
        ans = ans / __gcd(ans, t) * t;
    }
    cout << ans;
}
