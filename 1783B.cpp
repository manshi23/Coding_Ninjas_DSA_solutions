//Matrix of Differences
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
    int a=1,b=n*n,c=0,k=1;
if(n%2){   
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c%2==0) cout<<a++;
            else cout<<b--;
            cout<<" ";
            c++;
        }
        cout<<endl;
    }
    }
    else{
     for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            if(c%2==0) v.pb(a++);
            else v.pb(b--);
            c++;
        }
        if(i%2==1) reverse(all(v));
        for(auto& i:v) cout<<i<<" ";
        cout<<endl;
        }
	}
}
return 0;
}
