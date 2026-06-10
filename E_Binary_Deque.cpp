#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int> a(n);
        int sum=0;
        int c1=0;
        int ans=1e9;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]==1) c1++;
        }    
        if(sum==s){
            cout<<0<<endl;
            continue;
        }
        else if(sum<s){
            cout<<-1<<endl;
            continue;
        }
        else{
            int need=sum-s;
            vector<int> left,right;
            for(int i=0; i<n; i++){
               if(a[i]==1) left.push_back(i+1);
            }
            int cnt=1;
            for(int i=n-1; i>=0; i--){
                if(a[i]==1) right.push_back(cnt);
                cnt++;
            }
            
            for(int l=0; l<=need; l++){
                int r=need-l;
                if(l>left.size() || r>right.size()) continue;
                int leftcost=(l==0?0:left[l-1]);
                int rightcost=(r==0?0:right[r-1]);
                if(leftcost+rightcost>n) continue;
                ans=min(ans,leftcost+rightcost);
            }
        }
        cout<<ans<<endl;
    }
}