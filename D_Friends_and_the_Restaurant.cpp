#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> x(n),y(n);
        for(int i=0; i<n; i++) cin>>x[i];
        for(int i=0; i<n; i++) cin>>y[i];
        multiset<int> ms;
        for(int i=0; i<n; i++){
            ms.insert(y[i]-x[i]);
        }
        int ans=0;
        while(ms.size()>0){
            int val=*ms.begin();
            ms.erase(ms.begin());

            auto find=ms.lower_bound(-val); //find difference element which is equal or just greater than -val 
            if(find == ms.end()) continue;
            ans++;
            ms.erase(find);
        }
        cout<<ans<<endl;
    }
}