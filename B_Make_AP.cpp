#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;

        bool ok = false;

        // Case 1: multiply a
        if((2*b - c) > 0 && (2*b - c) % a == 0)
            ok = true;

        // Case 2: multiply b
        if((a + c) % (2*b) == 0)
            ok = true;

        // Case 3: multiply c
        if((2*b - a) > 0 && (2*b - a) % c == 0)
            ok = true;

        cout << (ok ? "YES\n" : "NO\n");
    }
}