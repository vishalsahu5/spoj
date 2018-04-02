#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int dp[5002];

ll solve(string A, int pos) {
	if (pos == A.size()) {
		return 1;
	}
	if (pos == A.size() - 1) {
		if(A[pos] != '0')
			return 1;
		else
			return 0;
	}
	if (A[pos] == '0') {
		return 0;
	}
	ll val; 
	if(dp[pos] != -1){
		return dp[pos];
	}else{
		if (A[pos] == '1') {
			if(A[pos+1] == '0')
				val = solve(A,pos+2);
			else
				val = solve(A, pos+1) + solve(A, pos + 2);
		}else if (A[pos] == '2' && (A[pos+1] - '0') <= 6) {
			if(A[pos+1] == '0')
				val = solve(A,pos+2);
			else
				val = solve(A,pos+1) + solve(A, pos + 2);
		}else {
			val = solve(A, pos+1);
		}		
	}
	dp[pos] = val;
	return dp[pos];
}


int main(){
	freopen("input.txt", "r" , stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(true){
		string A;
		cin >> A;
		if(A == "0") break;
		memset(dp, -1, sizeof(int)*(A.size()+1));
		cout << solve(A, 0) << endl;
	}
	return 0;
}