//Interesting Drink
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n;
	cin>>n;
	ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
	sort(a,a+n);
	ll q;
	cin>>q;
	ll b[q];
	for(ll i=0;i<q;i++){
		cin>>b[i];
		int ans=upper_bound(a,a+n,b[i])-a;
		cout<<ans<<endl;
	}
	return 0;
}
