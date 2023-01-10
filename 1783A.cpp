//Make it beautiful
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
		ll n;
		cin>>n;
		ll a[n];set<int>s;
		for(int i=0;i<n;i++){cin>>a[i];
		s.insert(a[i]);
		}
		if(s.size()==1){
			cout<<"NO"<<endl;
		}
		else{
			sort(a,a+n);
			int low=0;
			int high=n-1;
			cout<<"YES"<<endl;
			while(low<=high){
				if(low==high){
					cout<<a[low]<<" ";
				}
				else{
					cout<<a[low]<<" "<<a[high]<<" ";
				}
				low++;
				high--;
			}
			cout<<endl;
		}
	}
return 0;
}
