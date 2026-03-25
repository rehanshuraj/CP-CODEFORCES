#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long a,b;cin>>a>>b;
        long long op=0;
        if(a>b){
            while(a>b){
                if(a%2!=0) break;
                a/=2;
                op++;
            }
            
        }
        else if((a<b)){
            while(a<b){
                a*=2;
                op++;
            }
        }
        if(a==b){
            int op8=op/3;
            op-=op8*3;
            int op4=op/2;
            op-=op4*2;
            cout<<op8+op4+op<<endl;
        }
        else cout<<-1<<endl;
        
    }
}