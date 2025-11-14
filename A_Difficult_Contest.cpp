#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
       string s;
       cin>>s;
       int cnt=0;
       string rest;

       for(char ch:s){
         if(ch=='T') cnt++;
         else rest.push_back(ch);
       }

       cout<< string(cnt,'T') << rest <<endl;

    }
}
