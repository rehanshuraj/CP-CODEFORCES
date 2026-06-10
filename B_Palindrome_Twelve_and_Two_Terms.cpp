#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll r = n % 12;
        ll a;

        if(r <= 9) a = r;
        else if(r == 10) a = 22;
        else a = 11;

        if(a > n) cout << -1 << "\n";
        else cout << a << " " << n - a << "\n";
    }

    return 0;
}
