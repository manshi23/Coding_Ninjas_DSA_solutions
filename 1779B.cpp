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
        if(n==3){
            cout<<"NO"<<endl;
        }
        else if(n%2!=0){
            cout<<"YES"<<endl;
            int count=n/2;
            for(int i=0;i<n/2;i++){
                cout<<count-1<<" "<<-1*count<<" ";
            }
            cout<<count-1<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<"1 -1"<<endl;
            }
        }
    }
return 0;
}
