#include<bits/stdc++.h>
using namespace std;
void solve(string& s, set<string>& st){
    st.insert(s);
    if(s.length()<=1) return;
    string s1=s.substr(1);
    string s2=s;
    if(s.length()>=2){
        s2.erase(1,1);
    }
    solve(s1,st);
    solve(s2,st);

}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        set<string> st;
        //  solve(s,st);
        vector<string> prefix(n);
        prefix[0]=s[0];
        for(int i=1;i<n; i++){
            prefix[i]=prefix[i-1]+prefix[i];
        }
        for(int i=0; i<n; i++){
           st.insert(prefix[i]);
        } 

        cout<<st.size()<<endl;
    }
}

