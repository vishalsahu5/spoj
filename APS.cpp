#include <bits/stdc++.h>
using namespace std;
const long long int len = 10000000;
int memo[len];
long long int dp[len];
long long int f[len];
void sieve(){
	for(long long int i=2; i<len; i++){
		if(memo[i] == 0){
			for(long long int j=i*i; j<len; j+=i){
				if(memo[j] == 0){
					memo[j] = 1;
					f[j] = i;
				}	
			}
			dp[i] = dp[i-1] + i;
		}else{
			dp[i] = dp[i-1] + f[i];
		}
	}
}

int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	memset(memo, 0, sizeof(int)*len);
	memset(f, 0, sizeof(long long int)*len);
	memset(dp, 0, sizeof(long long int)*len);
	dp[0] = 0;
	dp[1] = 0;	
	sieve();
	while(t--){
		long long int n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}








