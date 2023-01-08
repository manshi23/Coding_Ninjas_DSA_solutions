//Laptops 
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<pair<ll,ll> >v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    ll count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second){
            count=1;
            break;
        }
    }
    if(count){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}
