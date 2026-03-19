#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        bool flag=false;
        for(int j=1; j<n-1; j++){
            int i=-1,k=-1;
            for(int left=0; left<j; left++){
                if(a[left]<a[j]){
                    i=left+1;
                    break;
                }
            }

            for(int right=j+1; right<n; right++){
                if(a[right]<a[j]){
                    k=right+1;
                    break;
                }
            }

            if(i!=-1 && k!=-1){
               cout<<"YES"<<endl;
               cout<<i<<" "<<j+1<<" "<<k<<endl;
               flag=true;
               break;
            }
        }
        if(!flag) cout<<"NO"<<endl;
    }
}