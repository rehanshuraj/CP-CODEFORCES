#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,q;
    cin>>n>>q;
    vector<ll> arr(n),prevarr(n);
    long long sum=0;
    for(ll i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    vector<ll> last(n,0);

    ll timer=0;
    ll global=0;

    while(q--){
        ll t;
        cin>>t;

        if(t==1){
            ll i,x;
            cin>>i>>x;
            i--;

            ll old;

            if(last[i] < timer)
                old = global;
            else
                old = arr[i];

            sum -= old;
            sum += x;

            arr[i] = x;
            last[i] = timer;
        }
        else{
            ll x;
            cin>>x;

            timer++;
            global = x;
            sum = n * x;
        }

        cout<<sum<<"\n";
    }
    

}