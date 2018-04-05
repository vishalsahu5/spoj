#include <bits/stdc++.h>
using namespace std;

// bool isPerfect(long long int num){
// 	return (pow((long long int)sqrt(num),2) == num);
// }

long long int gcd(long long int m, long long int n){	
	while (m != n){	
		if (m > n)
			m = m - n;
		else
			n = n - m;
	}
	return m;
}

long long int lcm(long long int m, long long int n){
	long long int res = m*n;
	return res/gcd(m,n);
}


int main(){
	// freopen("input.txt", "r", stdin);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(true){
		long long int w,h;
		cin >> w >> h;
		if(w == 0 && h == 0)
			break;
		// if(max(w,h)%min(w,h) == 0){
		// 	cout << max(w,h)/min(w,h) << endl;
		// 	continue;
		// }
		// long long int area = w*h;
		// while(isPerfect(area)){
		// 	area = (long long int)sqrt(area);
		// }
		// cout << area << endl;
		long long int l = lcm(w,h);
		long long int ans = l/gcd(w,h);
		cout << ans << endl;
	}
	return 0;
}