#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	freopen("input.txt", "r", stdin);
	while(true){
		ll a,b,c;
		cin >> a >> b >> c;
		if(a == 0 && b == 0 && c == 0){
			break;
		}
		if(2*b == a + c){
			cout << "AP " << c + (c-b) <<endl; 
		}else{
			cout << "GP " << c*(c/b) << endl;
		}
	}

}