#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<long long> a(n), temp;

        for(int i=0; i<n; i++){

            a[i] = i+1;

            if(s[i]=='1')
                temp.push_back(i+1);
        }

        vector<bool> keep(n+1,false);

        for(int i=0; i<temp.size(); i++)
            keep[temp[i]] = true;

        vector<bool> remove(n+1,false);

        long long ans = 0;

        for(int k=1; k<=n; k++){

            for(int multi=k; multi<=n; multi+=k){

                if(keep[multi])
                    break;

                if(!remove[multi]){

                    ans += k;
                    remove[multi] = true;
                }
            }
        }

        cout << ans << endl;
    }
}