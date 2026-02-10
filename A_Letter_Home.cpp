#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,s;cin>>n>>s;
        vector<int> arr(n);
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
        if(n<s){
            cout<<abs(n-s)<<endl;
            continue;
        }
        float mid=maxi/2;
        if(s>mid){
            cout<<2*(maxi-s)+(s-1)<<endl;
        }
        else{
            cout<<2*(s-1)+(maxi-s)<<endl;
        }

    }
    
}
