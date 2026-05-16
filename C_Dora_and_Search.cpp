#include<bits/stdc++.h>
using namespace std;
bool check(int val , set<int>& st){
   if((*st.begin()) == val){
    return true;
   }
   if((*st.rbegin()) == val) return true;
   return false;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        int l=0,r=n-1;
        set<int> st(arr.begin(),arr.end());
        while(l<r){
            if(check(arr[l],st)){
                st.erase(arr[l]); //log(n)
                l++;
                continue;

            }
            if(check(arr[r],st)){
                st.erase(arr[r]);
                r--;
                continue;
            }

            break;
        } //nlog(n)
        if(l<r){
            cout<<l+1 << " "<< r+1<<endl;
        }
        else cout<<-1<<endl;
    }
}