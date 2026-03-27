#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> b(n);     
        unordered_set<long long> st;
        bool flag = false;   
        for(int i = 0; i < n; i++){
            cin >> b[i];
            if(st.count(b[i])){
                flag = true;
            }
            st.insert(b[i]);
        }  
        if(flag){
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
}