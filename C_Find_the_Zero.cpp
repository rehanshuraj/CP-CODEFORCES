#include <iostream>
#include <cstdlib>

using namespace std;

void solve() {
    int n;
    cin >> n;

    auto ask = [&](int i, int j) {
        cout << "? " << i << " " << j << endl;
        int res;
        cin >> res;
        if (res == -1) exit(0);
        return res;
    };

    if (ask(1, 2) == 1) {
        cout << "! 1" << endl;
        return;
    }
    if (ask(2, 3) == 1) {
        cout << "! 2" << endl;
        return;
    }
    if (ask(1, 3) == 1) {
        cout << "! 1" << endl;
        return;
    }

    for (int k = 2; k < n; ++k) {
        if (ask(2 * k, 2 * k + 1) == 1) {
            cout << "! " << 2 * k << endl;
            return;
        }
    }

    cout << "! " << 2 * n << endl;
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}