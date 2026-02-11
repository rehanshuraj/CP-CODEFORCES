#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin >> t;
    
    while (t--) {
        long long n;cin>>n;
        vector<long long> a(n);
        for(long long i=0; i<n; i++) cin>>a[i];
        map<long long, long long> freq;
        for(long long x: a) freq[x]++;
        if(freq.size()>=3) cout<<"No"<<endl;
        else{
            long long freq1, freq2;
            freq1=freq.begin()->second;
            freq2=freq.rbegin()->second;
            if(freq1==freq2) cout<<"Yes"<<endl;
            else if(n%2==1 && abs(freq2-freq1)==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    
    return 0;
}