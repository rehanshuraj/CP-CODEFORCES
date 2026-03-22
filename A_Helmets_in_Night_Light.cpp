#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int,int>> v;
        for(int i = 0; i < n; i++){
            v.push_back({b[i], a[i]});
        }

        sort(v.begin(), v.end()); 
        long long cost = p;         
        int remaining = n - 1;

        for(auto &it : v){
            int bi = it.first;
            int ai = it.second;
            if(remaining == 0) break;
            if(bi >= p) break;

            int take = min(remaining, ai);
            cost += 1LL * take * bi;
            remaining -= take;
        }
        cost += 1LL * remaining * p;
        cout << cost << endl;
    }
}