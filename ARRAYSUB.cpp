#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	int k;
	cin >> k;
	for(int i=0; i<=n-k; i++){
		int max_ele = INT_MIN;
		for(int j=i; j<i+k; j++){
			max_ele = max(max_ele, v[j]);
		}
		cout << max_ele << " ";
	}
	cout << endl;
	return 0;
}