#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		ll N,M;
		cin >> N;
		set<ll> v1,v2;
		for(ll i=0; i<N; i++){
			ll x;
			cin >> x;
			v1.insert(x);
		}
		cin >> M;
		for(ll i=0; i<M; i++){
			ll x;
			cin >> x;
			v2.insert(x);
		}
		ll ans = 1000000;
		set<ll>::iterator it2 = v2.begin();
		set<ll>::iterator it1 = v1.begin();
		while(it1 != v1.end() && it2 != v2.end()){
			ans = min(ans, abs(*it1 - *it2));
			if(*it1 > *it2)
				it2++;
			else
				it1++;
		}
		cout << ans << endl;
	}
	return 0;
}