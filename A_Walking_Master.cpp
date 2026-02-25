#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        if(b>d){
            cout<<-1<<endl;
            continue;
        }

        int moves=d-b;
        int source_x=a+moves;
        if(source_x<c) cout<<-1<<endl;
        else{
            moves+=source_x-c;
            cout<<moves<<endl;
        }

    }
    return 0;
}

