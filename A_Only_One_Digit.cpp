#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        string X = to_string(x);
        set<int> st;
        for(int i=0; i<X.length(); i++){
           st.insert(X[i]-'0');
        }

        cout<< *st.begin() <<endl;

       
    }
}
