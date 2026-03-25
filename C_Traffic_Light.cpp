#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        char curr;
        string s;
        cin>>n>>curr>>s;
        s=s+s;
        n*=2;
        vector <int> ans;
        int i=0;
        while (i<n) {
            if (s[i]==curr) {
                int j=i;
                while (j<n && s[j]!='g') {
                    j++;
                }
                if (s[j]=='g') ans.push_back(j-i);
                i=j+1;
            }
            else i++;
        }
        cout<<*max_element(ans.begin(), ans.end())<<endl;
    }
    return 0;
}