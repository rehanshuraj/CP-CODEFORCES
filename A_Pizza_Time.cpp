#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int m=n;
        int hao=0,alex=0,m1,m2,m3;
        while(m!=0){
            if(m<=2){
                break;
            }
            else{
                m1=floor(m/3);
                m2=floor(m/3);
                m3=m-m1-m2;
                hao+=m1;
                m=m3;
            }
        }
        cout<<hao<<endl;
    }
}
