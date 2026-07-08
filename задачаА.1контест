#include <bits/stdc++.h>
using namespace std;
 
#define all(x) x.begin(), x.end()
using ll = long long;
using pll = array<ll, 2>;
 
int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector <long long> a(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
 
    while (true){
        int l, r;
        cin >> l >> r;
        if (l == 0 && r == 0){
            break;
        }
 
        reverse(a.begin() + l, a.begin() + r + 1);
    }
 
    for (int i = 1; i <= n; i++){
        cout << a[i] << " \n" [i == n];
    }
 
    return 0;
}
