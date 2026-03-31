#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long n;
		cin >> n; 
		vector<long long> second_elements;
		long long lowest_first_minimum = INT_MAX;
        for(int i=0; i<n; i++){
            long long m;cin>>m;
            vector<long long> a(m);
            for(auto &it :a) cin>>it;
            sort(a.begin(),a.end());
            second_elements.push_back(a[1]);
            lowest_first_minimum=min(lowest_first_minimum,a[0]);
        }
        sort(second_elements.begin(),second_elements.end());
        long long ans=0;
        for(auto& it:second_elements) ans+=it;
        ans-=second_elements[0];
        ans+=lowest_first_minimum;
        cout<<ans<<endl;
    }

}