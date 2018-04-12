#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
typedef long long int ll;
unordered_map<ll, ll> m;

ll solve(ll n) {
    if (n <= 2) {
        return n;
    }
    if (m[n]) {
        return m[n];
    }
    m[n] = max(solve(n/2) + solve(n/3) + solve(n/4), n);
    return m[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    while (cin >> n) {
        cout << solve(n) << endl;
    }
    return 0;
}
