#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
ull A[100000][100000];

int main(){
	freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ull n,k;
	cin >> n >> k;
	string str;
	cin >> str;
	ull count = 1;
	// memset(A, 0, n*n*sizeof(int));
	for(ull i=0; i<n; i++){
		if(i%2 == 0){	
			int k=0;
			int iter = i;
			while(!(iter<0 && k > i)){
				A[iter--][k++] = count++;
			}
		}else{
			int k=i;
			int iter=0;
			while(!(k<0 && iter > i)){
				A[iter++][k--] = count++;
			}
		}
	}
	for(ull i=n; i<2*n-1; i++){
		if(i%2==0){
			int k = i-n+1;
			int iter = i-k;
			while(k < n){
				A[iter--][k++] = count++;
			}
		}else{
			int iter = i-n+1;
			int k = i-iter;
			while(iter < n){
				A[iter++][k--] = count++;
			}
		}
	}
	ull sum=A[0][0];
	int r = 0,c = 0;
	for(int i=0; i<str.size(); i++){
		if(str[i] == 'U') r--;
		else if(str[i] == 'D') r++;
		else if(str[i] == 'L') c--;
		else if(str[i] == 'R') c++;
		sum += A[r][c]; 
	}
	cout << sum << endl;
	return 0;
}