#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> six, two, three, other;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 6 == 0) six.push_back(a[i]);
            else if(a[i] % 2 == 0) two.push_back(a[i]);
            else if(a[i] % 3 == 0) three.push_back(a[i]);
            else other.push_back(a[i]);
        }

        vector<int> ans;

        for(auto x : six) ans.push_back(x);
        for(auto x : two) ans.push_back(x);
        for(auto x : other) ans.push_back(x);
        for(auto x : three) ans.push_back(x);

        for(auto it : ans) cout << it << " ";
        cout << endl;
    }
}