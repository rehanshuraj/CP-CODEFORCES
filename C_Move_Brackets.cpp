#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        string s;cin>>s;
        long long op=0,sum=0;
        for(int i=0; i<n; i++){
            if(s[i]==')') sum--;
            else sum++;
            if(sum<0){
                sum=0;
                op++;
            }
        }      
        cout<<op<<endl;
    }
}