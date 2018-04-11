#include<bits/stdc++.h>
using namespace std;
#define LEN 34000
vector<int> v;
void generate(){
	bool memo[LEN];
	memset(memo, true, sizeof(bool)*(LEN));
	for(int i=2; i<=LEN; i++){
		if(memo[i] == true){
			int count = 0;
			for(int j=i+1; j<=LEN; j++){
				if(memo[j] == true)
					count++;
				if(count == i){
					memo[j] = false;
					count = 0;
				}
			}
		}
	}
	for(int i=2; i<=LEN; i++){
		if(memo[i])
			v.push_back(i);
	}
}


int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	generate();

	while(true){
		int n;
		cin >> n;
		if(n == 0)
			break;
		cout << v[n-1] << endl;
	}
	return 0;
}