#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0 ; i<n; i++){
            cin>>a[i];
        }
        map<int,int> mapp;
        for(int i=0 ; i<n; i++){
            if(a[i] != -1){
              mapp[a[i]]++;
            }
            
        }
        if(mapp.size()== 0) cout<<"yes"<<endl;
        else if(mapp.size()==1 &&  mapp.begin()->first == 0){
            cout<<"no"<<endl;
        }else if(mapp.size()==1 &&  mapp.begin()->first != 0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }   
    
}
