#include<bits/stdc++.h>
using namespace std;
bool good(long long n){
    long long num=n;
    while(num!=0){
       long long x=num%10;
       if(x!=0 && n%x!=0) return false;
       num/=10;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        while(!good(n)) n++;
        cout<<n<<endl;
    }
}