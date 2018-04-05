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
		string s;
		cin >> s;
		string r = s;
		reverse(r.begin(),r.end());
		if(s == r){
			cout << "YES" << endl;
		}else{
			cout <<"NO" << endl;
		}
	}
}