//Regular Bracket Sequence
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
        int x,y;
        cin>>x>>y;
        if(x>3){cout<<"YES"<<endl;}
        else if(x==1){if(y==1){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}}
        else{if(y<=3){cout<<"YES"<<endl;}else{cout<<"NO"<<endl;}}
    }
return 0;
}
