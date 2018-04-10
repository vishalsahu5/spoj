#include <bits/stdc++.h>
using namespace std;
#define MAX 100001
vector<int> primes;
void sieve(){
	bool memo[MAX];
	memset(memo, true, sizeof(bool)*MAX);
	for(int i=2; i*i < MAX; i++){
		if(memo[i]){
			for(int j=i*i; j< MAX; j+=i){
				memo[j] = false;
			}
		}
	}
	for(int i=2; i < MAX; i++){
		if(memo[i])
			primes.push_back(i);
	}
}

void segsieve(long long m, long long n){
	bool memo[n-m+1];
	memset(memo,true,sizeof(bool)*(n-m+1));
	for(long long i=0; primes[i]*(unsigned long long int)primes[i] <= n; i++){
		long long a = primes[i];
		long long base = (m/(a))*a;
		if(base < m){
			base += a;
		}
		for(long long j=base; j<= n; j+=a){
			memo[j-m] = false;
		}
		if(base == a){
			memo[base-m] = true;
		}
	}
	if(m == 1){
		memo[0] = false;
	}
	for(int i=0; i<=n-m; i++){
		if(memo[i] == true){
			cout << i+m << endl;
		}
	}
}

int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	sieve();
	while(t--){
		long long m,n;
		cin >> m >> n;
		segsieve(m,n);
		cout << endl;
	}
	return 0;
}