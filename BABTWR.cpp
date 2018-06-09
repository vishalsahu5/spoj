#include <bits/stdc++.h>
using namespace std;

struct node {
    long long int height, width, length;
};

bool custom_compare(const node l, const node r){
    return (l.width * l.length > r.width * r.length);
}

int main() {
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<node> v;
        while(n--){
            long long int h,w,l;
            cin >> h >> w >> l;
            v.push_back({h,w,l});
            v.push_back({h,l,w});
            v.push_back({l,w,h});
            v.push_back({l,h,w});
            v.push_back({w,h,l});
            v.push_back({w,l,h});
        }
        sort(v.begin(),v.end(), custom_compare);
        vector<long long int> dp(v.size());
        for(int i=0; i<v.size(); i++){
            dp[i] = v[i].height;
        }
        for(int i=1; i<v.size(); i++){
            for(int j=0; j < i; j++){
                if((v[i].width < v[j].width) && (v[i].length < v[j].length) && (dp[i] < dp[j] + v[i].height)){
                    dp[i] = dp[j] + v[i].height;
                }
            }
        }
        cout << *max_element(dp.begin(),dp.end()) << endl;
    }
    return 0;
}