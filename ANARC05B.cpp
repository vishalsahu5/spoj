#include <bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(true){
		int n1,n2;
		vector<int> v1,v2;
		vector<pair<int,int>> crossing;
		unordered_map<int, int> m;
		cin >> n1;
		if(n1 == 0)
			break;
		for(int i=0; i<n1; i++){
			int x;
			cin >> x;
			v1.push_back(x);
			m[x] = i+1;
		}
		cin >> n2;
		for(int i=0; i<n2; i++){
			int x;
			cin >> x;
			v2.push_back(x);
			if(m[x])
				crossing.push_back(make_pair(m[x]-1,i));
		}
		int s1=0, s2=0, sum1 = 0, sum2 = 0, best = 0, k=0;
		while(k < crossing.size()){
			sum1=0;
			sum2=0;
			for(int i=s1; i<=crossing[k].first; i++){
				sum1 += v1[i];
			}

			for(int i=s2; i<=crossing[k].second; i++){
				sum2 += v2[i];
			}
			best += max(sum1, sum2); 
			s1 = crossing[k].first + 1;
			s2 = crossing[k].second + 1;
			k++;
		}
		sum1 = 0; sum2 = 0;
		for(int i=s1; i<n1; i++)
			sum1 += v1[i];
		for(int i=s2; i<n2; i++)
			sum2 += v2[i];
		best += max(sum1, sum2);
		cout << best << endl;
	}
}