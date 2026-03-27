#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long x,y,k;
        cin>>x>>y>>k;
        long long req = (y*k)+k;
        //Trade of 1 Stick to Sticks
        // req = trade*x - trade+1;
        // req-1 = trade*(x-1)
        // trade = (req-1+x-2)/(x-1);
        long long ans = (req-1+x-2)/(x-1);
        // k another trade to required to convert into coal
        ans+=k;
        cout<<ans<<endl;
    }
    return 0;
}