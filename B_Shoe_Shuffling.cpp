#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        map<int,int> freq;
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        for(int i=0; i<n; i++) freq[arr[i]]++;
        bool flag=true;
        for(auto &it : freq){
            if(it.second==1) flag=false;
        }
        if(!flag) cout<<-1<<endl;
        else{
            vector<int> index(n);
            for(int i=0; i<n; i++){
               index[i]=i+1;
            }
            int i=0,j=0;
            while(j<n){
                if(arr[i]==arr[j]) j++;
                else{
                    int first=index[i];
                    for(int k=i; k<j-1; k++){
                        index[k]=index[k+1];
                    }
                    index[j-1]=first;
                    i=j;
                }
            }
            int first=index[i];
            for(int k=i; k<j-1; k++){
                index[k]=index[k+1];
            }
            index[j-1]=first;
            for(int i=0; i<n; i++) cout<<index[i]<<" ";
            cout<<endl;

        }

    }
}