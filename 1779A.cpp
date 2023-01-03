//Hall of Frame
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
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0;int r=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                l++;
            }
            else{
                r++;
            }
        }
        if(l==0||r==0){
            cout<<-1<<endl;
            continue;
        }
        if(s[n-1]=='L'&&s[0]=='R'){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        int flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'&&s[i+1]=='L'){
                flag=1;
                cout<<0<<endl;
                break;
            }
            else if(s[i]=='L'&&s[i+1]=='R'){
                ans=i;
            }
        }
        if(flag==0){
            cout<<ans+1<<endl;
        }
    }
return 0;
}
