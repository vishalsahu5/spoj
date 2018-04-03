#include <bits/stdc++.h>
using namespace std;

// int dp[6101];

int LCS(string &A, string &B){
	// if(pos == A.size()-1){
	// 	if(A[pos] == B[pos])
	// 		return 1;
	// 	else
	// 		return 0;
	// }
	// int val;
	// if(dp[pos] != -1){
	// 	return dp[pos];
	// }
	// if(A[pos] == B[pos]){
	// 	val = 1 + LCS(A, B, pos+1);
	// }else{
	// 	val = LCS(A, B, pos+1);
	// }
	// dp[pos] = val;
	// return dp[pos];
	int dp[B.size()][A.size()];
	for(int i=0; i<A.size(); i++){
		if(i == 0){
			dp[0][0] = A[i] == B[i];
			continue;
		}
		if(A[i] == B[0]){
			dp[0][i] = 1;
		}else{
			dp[0][i] = max(dp[0][i-1], 0);
		}
		if(B[i] == A[0]){
			dp[i][0] = 1;
		}else{
			dp[i][0] = max(dp[i-1][0], 0);
		}
	}
	for(int i=1; i<B.size(); i++){
		for(int j=1; j<A.size(); j++){
			if(A[j] == B[i]){
				dp[i][j] = 1 + dp[i-1][j-1];
			}else{
				dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
		}
	}
	return dp[A.size()-1][A.size()-1];
}


int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string r = s;	
		// memset(dp, -1, sizeof(int)*s.size());
		reverse(r.begin(), r.end());
		cout << s.size() - LCS(s, r) << endl;
	}
}