#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
   ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        ll res=0;
        while(m>n){
            m/=n;
            res++;
        }
        cout<<res<<endl;
    }
        
    
    
             
    return 0;
}
