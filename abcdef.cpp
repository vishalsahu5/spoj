#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	int G[n];
	for(int i=0; i<n; i++){
		cin >> G[i];
	}
	// unordered_map<int, int> cA;
	// unordered_map<int, int> cB;
	// unordered_set<int> A;
	vector<int> A, B;
	int temp = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				// A.insert((G[i]*G[j]) + G[k]);
				A.push_back((G[i]*G[j]) + G[k]);
				// cA[(G[i]*G[j]) + G[k]]++;
				if(G[i] != 0){
					// cB[G[i]*(G[j] + G[k])]++; 
					B.push_back(G[i]*(G[j] + G[k]));
				}
			}
		}
	}
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());
	long long int ans = 0;
	for(auto a:A){
		int high = upper_bound(B.begin(),B.end(),a)-B.begin();
		int low = lower_bound(B.begin(),B.end(),a)-B.begin();
		ans += high - low;
	}
	cout << ans << endl;
	return 0;
}




