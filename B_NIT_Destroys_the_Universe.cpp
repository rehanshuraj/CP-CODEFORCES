#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> arr(n);
        int cntzero=0;
        for (int i = 0; i < n; i++)
        {
          cin>>arr[i];
          if(arr[i]==0) cntzero++;
        }

        bool zerobtw=false;
        int s=0,l=n-1;
        while(arr[s]==0) s++;
        while(arr[l]==0) l--;

        for(int i=s; i<=l; i++){
            if(arr[i]==0){
                zerobtw=true;
                break;
            }
        }

        if(cntzero==n) cout<<0<<endl;
        else if(zerobtw) cout<<2<<endl;
        else cout<<1<<endl;

        
    }
}