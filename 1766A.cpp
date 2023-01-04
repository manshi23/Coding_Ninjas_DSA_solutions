//Extremely Round
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=n;
        if(n<=10){
            cout<<n<<endl;
        }else{
        int count=0;
        while(m>10){
            m=m/10;
            count+=9;
        }
        cout<<count+m<<endl;
    }
}
    return 0;
}
