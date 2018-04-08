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
		long long int a,b,res;
		char op;
		cin >> a;
		while(true){
			cin >> op;
			if(op == '=')
				break;
			cin >> b;
			if(op == '+'){
				res = a + b;
			}else if(op == '-'){
				res = a - b;
			}else if(op == '*'){
				res = a * b;
			}else if(op == '/'){
				res = a/b;
			}
			a = res;
		}
		cout << res << endl;
	}	
	return 0;
}