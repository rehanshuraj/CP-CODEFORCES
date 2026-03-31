#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a(n);
        for(long long i=0; i<n; i++) cin>>a[i];
        vector<pair<long long, long long>> building_map;
		for (int i = 0; i < n; i++)
			building_map.push_back({a[i], i});
        sort(building_map.rbegin(),building_map.rend());
        long long min=0;
        long long cordinate=1;
        vector<long long> ans(n+1,0);
        ans[0]=0;
        for(long long i=0; i<n; i++){
            ans[building_map[i].second+1]=cordinate;
            min+=(2*abs(cordinate)*building_map[i].first);
            if(cordinate<0){
                cordinate=abs(cordinate)+1;
            }
            else cordinate = -cordinate; 
        }
        cout<<min<<endl;
        for (auto it : ans)
			cout << it << " ";
        cout<<endl;
    }
}