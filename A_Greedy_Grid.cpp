#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m;

    cin >> n >> m;

    if( n < 2 || m<2) cout<<"NO"<<endl;
    else if(n >= 3 && m>=3) cout<<"YES"<<endl;
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}