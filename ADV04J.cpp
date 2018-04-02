#include <bits/stdc++.h>
using namespace std;

// int solve(int n){
// 	if(n == 5)
// 		return 4;
// 	if(n == 3 || n == 4)
// 		return 3;
// 	int x = ceil((float)n/2.0);
// 	return 1 + solve(x);
// }

int main(){
	// freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		// cout << solve(n) << endl;
		cout << int(1 + ceil(log2(n))) << endl;
	}
	return 0;
}