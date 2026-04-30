#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        int neg=0;
        long long total=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]<0){
                neg++;
                arr[i]=-arr[i];
            }
            total+= abs(arr[i]);
        }
        sort(arr.begin(),arr.end());
        if(neg & 1) total-=(2*(arr[0]));
        cout<<total<<endl;
        
    }
}