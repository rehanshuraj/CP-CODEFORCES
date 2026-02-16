#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int a[t];
    int mini=INT_MAX;
    for(int i=0; i<t; i++){
        cin>>a[i];
        mini=min(mini,abs(a[i]));
    } 
    cout<<mini<<endl;

}