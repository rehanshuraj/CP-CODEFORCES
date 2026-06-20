#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            long long sum = 0;
            int minval = 1e9;
            for (int i = 0; i < n; ++i) {
                int a;cin >> a;
                minval = min(minval, a);
                sum += minval;
            }
            cout << sum << endl;
        }
    }
    return 0;
}