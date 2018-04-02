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
		float N,K,M;
		cin >> N >> K >> M;
		int count = 0;
		// ll val = floor((float)log10(M)/(float)log10(K));
		// if(pow(K,val) < M){
		// 	val--;
		// }
		// if(val <= 0){
		// 	cout << 0 << endl;
		// }else{
		// 	cout << val-1 << endl;
		// }
		while((N*K) <= M){
			N = N*K;
			count++;
		}
		cout << count << endl;
	}
}