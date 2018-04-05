#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int N,K;
		cin >> N >> K;
		int A[N];
		for(int i=0; i<N; i++){
			cin >> A[i];
		}
		sort(A, A+N);
		int diff = INT_MAX;
		for(int i=0; i<N-K+1; i++){
			// int minele = *min_element(A+i, A+i+K);
			// int maxele = *max_element(A+i, A+i+K);
			int minele = A[i];
			int maxele = A[i+K-1];
			diff = min(diff, maxele - minele);
		}
		cout << diff << endl;
	}

}