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
		int N,B;
		cin >> N >> B;
		int A[N];
		for(int i=0; i<N; i++){
			cin >> A[i];
		}
		int sum = 0, k = 0, start = 0, end = -1;
		int best = 0;
		unordered_map<int,int> m;
		for(int i=0; i<N+1; i++){
			m[i] = INT_MAX;
		}
		for(int i=0; i<N; i++){
			sum = sum + A[i];
			end=i;
			// cout << start << " " << end << " " << sum << endl;
			while(sum > B){
				if(start == end){
					sum = 0;
					start++;
					break;
				}
				sum = sum - A[start];
				start++;
			}
			k = end-start+1;
			best = max(k,best);
			m[k] = min(m[k], sum);
		}
 		cout << m[best] << " " << best << endl;
	}


}