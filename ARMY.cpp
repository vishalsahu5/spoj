#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		int G,M;
		cin >> G >> M;
		priority_queue<int> A,B;
		for(int i=0; i<G; i++){
			int x;
			cin >> x;
			A.push(x);
		}
		for(int i=0; i<M; i++){
			int x;
			cin >> x;
			B.push(x);
		}
		while(true){
			int x,y;
			x = A.top(); y = B.top();
			if(x < y){
				A.pop();
			}else{
				B.pop();
			}
			if(A.empty()){
				cout << "MechaGodzilla" <<endl;
				break;
			}else if(B.empty()){
				cout << "Godzilla" << endl;
				break;
			}
		}
	}
	return 0;
}