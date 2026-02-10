#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;     
        vector<int> arr;
        arr.push_back(0);
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            arr.push_back(a);
        }
        arr.push_back(k);
        n=arr.size();
        int maxi=INT_MIN;
        for(int i=1; i<n; i++){
            if(i==n-1){
                maxi=max(maxi, 2*(arr[i]-arr[i-1]));
            }
            else {
                maxi=max(maxi,arr[i]-arr[i-1]);
            }
        }
        cout<<maxi<<endl;
        
    }
    
    return 0;
}