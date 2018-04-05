#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k=1;
	while(true){
		string str;
		cin >> str;
		// getline(cin,str);
		if(str[0] == '-')
			break;
		stack<char> stk;
		int count = 0;
		for(int i=0; i<str.size(); i++){
			if(str[i] == '{')
				stk.push(str[i]);
			else{
				if(!stk.empty())
					stk.pop();
				else{
					stk.push(str[i]);
					count++;
				}
			}
		}
		cout << k++ << ". " << stk.size()/2 + count << endl;
	}
	return 0;
}