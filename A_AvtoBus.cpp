#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        if(n<4 || (n%2!=0)){
            cout<<-1<<endl;
            continue;
        }

        long long mini = (n+5)/6;
        long long maxi= n/4;
        cout<<mini<<" "<<maxi<<endl;
    }
}