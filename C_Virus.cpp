#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll> v(m);
        for(int i=0; i<m; i++) cin>>v[i];
        vector<int> gap;
        sort(v.begin(),v.end());
        for(int i=0; i<m-1; i++){
            gap.push_back(v[i+1]-v[i]-1);
        }
        gap.push_back(n - v[m-1] + v[0] - 1);
        sort(gap.rbegin(),gap.rend());

        int numsaved=0,days=0;
        for(auto &it : gap){
            int currgap=it - 2*days;
            if(currgap>0){
                numsaved++;
                currgap-=2;
                if(currgap>0){
                    numsaved+=currgap;
                }
                days+=2;
            }
        }
        cout<<n-numsaved<<endl;

    }
}