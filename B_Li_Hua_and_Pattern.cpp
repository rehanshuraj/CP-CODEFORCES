#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> mat(n,vector<int>(n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int a;cin>>a;
                mat[i][j]=a;
            }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
               if(mat[i][j] != mat[n-i-1][n-j-1]) cnt++;
            }
        }
        cnt/=2;
        if(cnt>k) cout<<"NO"<<endl;
        else{
            cnt=k-cnt;
            if(cnt%2==0) cout<<"YES"<<endl;
            else{
                if(n%2==0) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
        }
    }

}