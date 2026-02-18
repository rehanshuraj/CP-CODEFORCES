#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        bool desort=false;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
           cin >> a[i];
        }
        bool des=false;
        for(int i=1; i<n; i++){
            if(a[i]<a[i-1]) {
                des=true;
                break;
            }
        }
        if(des){
            cout<<0<<endl;
            continue;
        }
        int mini=INT_MAX;
        for(int i=0; i<n-1; i++){
          mini=min((a[i+1]-a[i]),mini);
        }
        cout<<(mini/2)+1<<endl;
    }
}

