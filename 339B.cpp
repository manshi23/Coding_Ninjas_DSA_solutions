//Xavia and Ringroad
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
        int m;
        cin>>m;
        int a[m];
        arr(a,m);
        int init=1;int count=0;
        range(i,m){
            if(a[i]>=init){
                count+=a[i]-init;
            }
            else{
                count+=n-(init-a[i]);
            }
            init=a[i];
        }
        cout<<count<<endl;
    }
return 0;
}
