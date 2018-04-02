#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int N;
		cin >> N;
		ll A[N];
		for(int i=0; i<N; i++){
			cin >> A[i];
		}
		ll sum = 0;
		for(int i=0, j=N-1, k=N-1; i < j; i++, j--, k-=2){
			sum += k*(A[j] - A[i]);
		}
		cout << sum << endl;
	}

	return 0;
}