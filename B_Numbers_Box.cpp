#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        long long sum=0,mini=LLONG_MAX,neg=0;;
        vector<vector<long long>> mat(n,vector<long long>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>mat[i][j];
                sum+=abs(mat[i][j]);
                if(mat[i][j]<0) neg++;
                mini=min(mini,abs(mat[i][j]));
            }
        }
        if(neg%2!=0) cout<<sum-2*(mini)<<endl;
        else cout<<sum<<endl;
    }
}