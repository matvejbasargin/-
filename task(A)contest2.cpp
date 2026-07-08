#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    int n;
    cin >> n;
 
    vector<ll> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
 
    sort(c.begin(), c.end());
 
 
    bool ok = true;
    for(int i = 1; i < n; i++){
        if (c[i] - c[i-1] != 1){
            ok = false;
            break;
        }
    }
 
    if (ok){
        cout << "Deck looks good" << endl;
 
    } else{
        cout << "Scammed" << endl;
    }
 
    return 0;
 
}
