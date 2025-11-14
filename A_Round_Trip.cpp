#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        long long R, X, D, n;
        cin >> R >> X >> D >> n;

        string s;
        cin >> s;

        long long  rated = 0;

        for(char c : s) {
            if(c == '1') {
                
                rated++;
                R = max(0LL, R - D);
            }
            else { // c == '2'
                if(R < X) {
                    
                    rated++;

                   
                    R = max(R - D, 0ll);
                }
                
            }
        }

        cout << rated << "\n";
    }
}
