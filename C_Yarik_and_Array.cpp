#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        int maxi = a[0];
        int curr = a[0];

        for(int i=1; i<n ;i++){
            if((a[i] & 1) != (a[i-1] & 1)){
                curr = max(a[i], curr + a[i]); // ✅ FIX
            }
            else{
                curr = a[i];
            }
            maxi = max(maxi, curr);
        }

        cout<<maxi<<endl;
    }
}