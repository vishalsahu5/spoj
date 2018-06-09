#include <bits/stdc++.h>
using namespace std;
void buildTree(int *st, int *A, int low, int high, int pos){
	if(low > high)
		return;
	if(low == high){
		st[pos] = A[low];
		return;
	}
	int mid = low + (high - low)/2;
	buildTree(st, A, low, mid, (2*pos) + 1);
	buildTree(st, A, mid+1, high, (2*pos) + 2);
	st[pos] = min(st[(2*pos) + 1], st[(2*pos) + 2]);
}
int query(int *st, int qlow, int qhigh, int stlow, int sthigh, int pos){
	if((qlow <= stlow) && (qhigh >= sthigh)){
		return st[pos];
	}
	if((sthigh < qlow )|| (stlow > qhigh)){
		return INT_MAX;
	}
	int mid = stlow + (sthigh - stlow)/2;
	return min(query(st, qlow, qhigh, stlow, mid, (2*pos) + 1), query(st, qlow, qhigh, mid+1, sthigh, (2*pos) + 2));
}
int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int m;
	cin >> n;
	int A[n];
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	int st[2*n];
	buildTree(st, A, 0, n-1, 0);
	cin >> m;
	for(int i=0; i<m; i++){
		int x,y;
		cin >> x >> y;
		cout << query(st, x, y, 0, n-1, 0) << endl;
	}
	return 0;
}