#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int strength = a[j - 1];  // strength of player j

        if(k>=2) cout<<"yes"<<endl;
        else{
            //if k==1
            int maxi=a[0];
            for(int i=1; i<n; i++){
                maxi=max(maxi,a[i]);
            }

            if(strength==maxi){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;
            }
        }
    }
    return 0;
}
