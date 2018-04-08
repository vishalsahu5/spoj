#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		long long int A,B,C;
		cin >> A >> B >> C;
		long long int n = (2*C)/(A+B);
		long long int d = (B-A)/(n-5);
		long long int a = A - 2*d;
		cout << n << endl;
		for(long long int i=0; i<n; i++){
			cout << a + i*d << " ";
		}
		cout << endl;
	}
	return 0;
}