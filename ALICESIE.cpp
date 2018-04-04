#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << ceil((float)n/2.0) << endl;
	}
	return 0;
}