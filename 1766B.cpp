//Notepad#
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;int flag=1;
        unordered_map<string,int>mp;
        for(int i=0;i<n-1;i++){
            string ste="";
            ste+=s[i];
            ste+=s[i+1];
            if(mp.find(ste)==mp.end()){
                mp[ste]=i;
            }else{
                if(mp[ste]!=i-1){
                flag=0;
                break;
                 }
            }
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
