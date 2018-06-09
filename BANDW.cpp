
#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(true){
		string given, target;
		cin >> given >> target;
		if(given == "*" && target == "*")
			break;

		int count = 0;
		bool flag = true;
		for(int i=0; i<given.size(); i++){

			if(given[i] != target[i]){
				flag = false;
			}else{
				if(flag == false){
					count++;
				}
				flag = true;
			}
		}
		if(flag == false){
			count++;
		}
		cout << count << endl;
	}

	return 0;
}
