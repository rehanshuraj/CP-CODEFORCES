#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long n=s.size();

        int i=0;
        int maxi=0;
        while(i<n){
            if(s[i]=='0'){
                i++;
                continue;
            }
            int j=i+1;
            while(j<n && s[j]=='1'){
               j++;
            }
            maxi=max(maxi,j-i);
            i=j;
        }
        if(maxi==n){
            cout<<n*n<<endl;
            continue;
        }

        if(s[0]=='1' && s[n-1]=='1'){
            int i=0;
            int cnt=0;
            while(s[i]=='1' && i<n){
                i++;
                cnt++;
            }
            int j=n-1;
            while(s[j]=='1' && j>i){
            j--;
            cnt++;
            }
            maxi=max(cnt,maxi);
        }
        maxi++;
        long long a = maxi / 2;
        long long b = (maxi + 1) / 2;
        cout << a * b << endl;
    }
}