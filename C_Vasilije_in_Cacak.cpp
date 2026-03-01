#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
      int n,k;
      cin>>n>>k;
      string s;cin>>s;
      vector<int> freq(26,0);
      for(char ch: s) freq[ch-'a']++;
      int odd=0;
      for(int i=0; i<26; i++){
        odd+=freq[i]%2;
      }
      if(odd>k+1){
        cout<<"NO"<<endl;
      }
      else cout<<"YES"<<endl;

    }
    return 0;
}
