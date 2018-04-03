#include <bits/stdc++.h>
using namespace std;

bool fun(vector<int> A, int C, int dist){
	int i=1;
	C--;
	int prev = 0;
	while(i<A.size() && C > 0){
		if(A[i] - A[prev] >= dist){
			prev = i;
			C--;
			if(C == 0) return true;
		}
		i++;
	}
	return false;
}


int main(){
	// freopen("input.txt", "r", stdin);
	int t;
	cin >> t;
	while(t--){
		int N,C;
		cin >> N >> C;
		vector<int> A;
		for(int i=0; i<N; i++){
			int x;
			cin >> x;
			A.push_back(x);
		}
		sort(A.begin(),A.end());
		int first = 0;
		int last = A[A.size()-1] - A[0] + 1;
	 	int best_ans = 0;
	 	int mid;
	 	while(last - first > 1){
	 		mid = (first + last)/2;
	 		if(fun(A, C, mid) == true){
	 			// go right
	 			best_ans = mid;
	 			first = mid;
	 		}else{
	 			//go left
	 			last = mid;
	 		}
	 	}
		cout << best_ans << endl;
	}

	return 0;
}