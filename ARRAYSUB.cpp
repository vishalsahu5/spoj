#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
	}
	int k;
	cin >> k;
	deque<int> q;
	for(int i=0; i<k; i++){
		while(!q.empty() && v[i] >= v[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	for(int i=k; i<n; i++){
		cout << v[q.front()] << " ";

		while(!q.empty() && v[i] >= v[q.back()]){
			q.pop_back();
		}
		if(!q.empty() && q.front() <= i - k){
			q.pop_front();
		}
		q.push_back(i);
	}
	if(!q.empty()){
		cout << v[q.front()] << " ";	
	}
	cout << endl;
	return 0;
}