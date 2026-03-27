#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long a, b; cin >> a >> b;
        long long op = 0;
        long long mini=LLONG_MAX;
        for(int i=0; i<=30; i++){
            long long newb=b+i;
            if(newb==1) continue;
            long long divaop=i;
            long long tempa=a;
            while(tempa>0){
                tempa/=newb;
                divaop++;
            }
            mini=min(divaop,mini);
        }
        cout <<mini<< endl;
    }
}