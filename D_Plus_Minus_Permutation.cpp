#include<bits/stdc++.h>
using namespace std;
long long lcm(long long num1, long long num2){
   return num1 * num2 / __gcd(num1,num2);
   //timecomplexity - O(log(min(num1,num2))) -O(log(n));
}

long long calculateSUM(long long start, long long end){
    return ((start+end)*(end-start + 1))/2;
}
int main(){
    long long t;cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long a=0;
        long long b=0;
        long long c1=(n/x) - (n/lcm(x,y));
        long long c2=(n/y) - (n/lcm(x,y));
        long long ans= calculateSUM(n-c1+1,n) - calculateSUM(1LL,c2);
        cout<<ans<<endl;
    }
}