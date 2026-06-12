#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            long long a, b, x;
            cin >> a >> b >> x;
            vector<long long> ans1;
            long long curr_a = a;
            while (curr_a > 0) {
                ans1.push_back(curr_a);
                curr_a /= x;
            }
            ans1.push_back(0); 
            vector<long long> ans2;
            long long curr_b = b;
            while (curr_b > 0) {
                ans2.push_back(curr_b);
                curr_b /= x;
            }
            ans2.push_back(0); 

            long long min_ops = -1;
            for (int i = 0; i < ans1.size(); ++i) {
                for (int j = 0; j < ans2.size(); ++j) {             
                    long long target = max(ans1[i], ans2[j]);
                    long long ops = i + (target - ans1[i]) + j + (target - ans2[j]);      
                    if (min_ops == -1 || ops < min_ops) min_ops = ops;
                }
            }
            cout << min_ops << "\n";
        }
    }
    return 0;
}