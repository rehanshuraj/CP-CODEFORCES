#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int zeroes=0,ans=0,ones=0;
        ll a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0) zeroes++;
            else if(a[i]==1) ones++;
            //saare elements ko phele add krlo ans me and then 0,1 = 2  and 0 gives 1 and remove bhi krdena 
            ans+=a[i];
        }
        //if 0,1 are present then add 2 in your ans 
        ans+= min(zeroes,ones) * 2;
        //and dont forget to remove this
        ans-= min(zeroes,ones);
        
        //agar abhi bhi zeroes batche hue hai toh we know zoes gives 1 add up to the answer
        if(zeroes > ones){
            ans = ans + (zeroes-ones);
        }

        cout<<ans<<endl;
       
    }
}
