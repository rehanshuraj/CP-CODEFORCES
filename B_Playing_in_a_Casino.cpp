#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<vector<long long>> v(n,vector<long long>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>v[i][j];
            }
        } //complexity - O(n*m)--> 10^5

        long long ans=0;
        for(int col=0; col<m; col++){
            vector<long long> temp;
            for(int row=0; row<n; row++){
                temp.push_back(v[row][col]);
            }
            sort(temp.begin(),temp.end());
            for(int i=0; i<n; i++){
                ans -= (temp[i] * (n-i-1));
                ans += (temp[i] * i);
            }
        }
        cout<<ans<<endl;
    }
}