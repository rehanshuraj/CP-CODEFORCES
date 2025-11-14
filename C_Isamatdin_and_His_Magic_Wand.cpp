#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int even=0,odd=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==0) even++;
            else odd++;
        }

        if(odd!=0 && even!=0){
            sort(arr.begin(),arr.end());
            for(auto it : arr) cout<<it<<" ";
        }else{
            for(auto it : arr) cout<<it<<" ";
        }
        cout<<endl;
    }
}
