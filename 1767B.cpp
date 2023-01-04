//BLOCK TOWERS
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
        int a[n]; 
        for(int i=0;i<n;i++){cin>>a[i];}
        sort(a+1,a+n);
        int ele=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<ele){
                continue;
            }
            else{
                while(ele<a[i]){
                    int diff=((a[i]-ele)+1)/2;
                    ele+=diff;
                    a[i]-=diff;
                }
            }
        }
        cout<<ele<<endl;
    }
return 0;
}
