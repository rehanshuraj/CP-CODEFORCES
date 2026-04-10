#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), x(q);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < q; i++) cin >> x[i];

        int min_x = 31; // since xi <= 30

        for(int i = 0; i < q; i++){
            if(x[i] < min_x){
                long long d = (1LL << x[i]);
                long long add = (1LL << (x[i] - 1));

                for(int j = 0; j < n; j++){
                    if(a[j] % d == 0){
                        a[j] += add;
                    }
                }
                min_x = x[i];
            }
        }

        for(auto &it : a) cout << it << " ";
        cout << "\n";
    }
}