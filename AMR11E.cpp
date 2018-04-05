#include <bits/stdc++.h>
using namespace std;

int memo[5000];
int len = 5000;
vector<int> v,prime;
void sieve(){
	for(int i=2; i<len; i++){
		for(int j=i*i; j<len; j+=i){
			memo[j] = 1;
		}
	}
	for(int i=2; i<len; i++){
		if(memo[i] == 0){
			prime.push_back(i);
		}
	}
}

void solve(int n){
	int k=30;
	while(true){
		if(v.size() == n)
			break;
		int count = 0;
		for(int i=0; i<prime.size(); i++){
			if(k%prime[i] == 0)
				count++;
			if(count == 3){
				v.push_back(k);
				break;
			}
		}
		k++;
		while(memo[k] == 0)
			k++;
	}
}

int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	memset(memo, 0, len*sizeof(int));
	sieve();
	solve(1001);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << v[n-1] <<endl;
	}


}