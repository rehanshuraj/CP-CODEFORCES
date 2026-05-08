#include<bits/stdc++.h>
using namespace std;

vector<int> findmax(vector<int> arr, int size){
   vector<pair<int,int>> temp(size);
   for(int i=0; i<size; i++){
       temp[i].first=arr[i];
       temp[i].second=i;
   } 

   sort(temp.rbegin(),temp.rend());
   
   vector<int> ans(3);
   for(int i=0 ; i<3; i++) ans[i]=temp[i].second;
   return ans;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n),b(n),c(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        for(int i=0; i<n; i++) cin>>c[i];
        vector<int> iidx=findmax(a,n);
        vector<int> yidx=findmax(b,n);
        vector<int> zidx=findmax(c,n);

        int ans=INT_MIN;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    int x=iidx[i],y=yidx[j],z=zidx[k];
                    if(x==y || y==z || x==z) continue;
                    ans=max(ans,a[x]+b[y]+c[z]);
                }
            }
        }
        cout<<ans<<endl;
        
    }
}