#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long calculate[4][4][35][4];

void init() {
    for (int A = 0; A < 4; ++A) {
        for (int B = 0; B < 4; ++B) {
            long long count[4][4] = {0};
            count[A][B] = 1;
            
            for(int target = 0; target < 4; ++target) {
                long long res = 0;
                for (int Y = 0; Y < 4; ++Y) res += count[target][Y];
                if (B == target) res++;
                calculate[A][B][0][target] = res;
            }

            for (int step = 1; step <= 30; ++step) {
                long long ncnt[4][4] = {0};
                for (int X = 0; X < 4; ++X) {
                    for (int Y = 0; Y < 4; ++Y) {
                        if (count[X][Y] > 0) {
                            int mid = X ^ Y;
                            ncnt[X][mid] += count[X][Y];
                            ncnt[mid][Y] += count[X][Y];
                        }
                    }
                }
                for (int X = 0; X < 4; ++X)
                    for (int Y = 0; Y < 4; ++Y)
                        count[X][Y] = ncnt[X][Y];
                
                for(int tar = 0; tar < 4; ++tar) {
                    long long res = 0;
                    for (int Y = 0; Y < 4; ++Y) res += count[tar][Y];
                    if (B == tar) res++;
                    calculate[A][B][step][tar] = res;
                }
            }
        }
    }
}

void solve() {
    long long n;
    int k;
    cin >> n >> k;
    string s, z;
    cin >> s >> z;

    long long C[4] = {0};
    for (int i = 0; i < n; ++i) {
        int u = s[i] - '0';
        int v = z[i] - '0';
        C[(u << 1) | v]++;
    }

    unsigned long long sum_x = 0;
    for (int sig = 0; sig < 4; ++sig) {
        if (C[sig] == 0) continue;
        int u = sig >> 1;
        int v = sig & 1;
        sum_x += (unsigned long long)C[sig] * calculate[u][v][k][1];
    }

    unsigned long long sum_xx = 0;
    for (int sig1 = 0; sig1 < 4; ++sig1) {
        if (C[sig1] == 0) continue;
        for (int sig2 = 0; sig2 < 4; ++sig2) {
            if (C[sig2] == 0) continue;
            int u1 = sig1 >> 1, v1 = sig1 & 1;
            int u2 = sig2 >> 1, v2 = sig2 & 1;
            int A = (u1 << 1) | u2;
            int B = (v1 << 1) | v2;
            sum_xx += (unsigned long long)C[sig1] * C[sig2] * calculate[A][B][k][3];
        }
    }

    unsigned long long ans = (unsigned long long)n * sum_x - sum_xx;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    init();
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}