#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long temp_n=(n*(n-1))/2;
        vector<long long> a(temp_n);
        for(long long i=0; i<temp_n; i++) cin>>a[i];
        sort(a.begin(),a.end());
        long long k=n-1, i=0;
        while(k>0){
            cout<<a[i]<<" ";
            i+=k;
            k--;
        } 
        cout << "1000000000\n";
    }
}