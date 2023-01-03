//Meximization

#include <bits/stdc++.h>
#define range(i,n) for(int i= 0; i < (n); i++)
#define ll long long
#define arr(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x)  x.begin(), x.end()
using namespace std;
int main() {
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        vector<int>v;
        for(int i=0;i<n;i++){
            cin>>a[i];
            // cout<<a[i]<<" ";
            mp[a[i]]++;
            if(mp[a[i]]==1){
                v.push_back(a[i]);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        for(auto it:mp){
            if(it.second>=2){
                for(int i=1;i<it.second;i++){
                    cout<<it.first<<" ";
                }
            }
        }
    }
return 0;
}
