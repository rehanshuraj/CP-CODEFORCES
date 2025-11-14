#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,c;
        cin >> n >> c;

        int a[n];
        for(int i=0 ; i<n; i++){
            cin>>a[i];
        }

        sort(a,a+n);
        reverse(a,a+n);

        int j=0;
        int ans=0;
        for(int i=0; i<n; i++){
            if((a[i] * 1<<j) <=c){
                j++;
                ans++;
            }
        }
        cout<<n-ans<<endl;
    }   
    
}
