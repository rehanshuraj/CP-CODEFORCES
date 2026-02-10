#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
       int n;cin>>n;
       vector<int> a(n);
       for(int i=0; i<n; i++) cin>>a[i];
       bool flag=true;
       if(a[0]!=1) flag=false;     
       cout<<(flag?"YES":"NO")<<endl;
    }
    
    return 0;
}