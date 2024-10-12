#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll f(ll a,ll b,ll c){
    return abs(a-b)+abs(a-c);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
   ll t;cin>>t;
   
   
    while(t--){
       ll x,y,z;
       cin>>x>>y>>z;
       cout<<min(f(x,y,z),min(f(y,x,z),f(z,x,y)))<<endl;
    }
        
    
    
             
    return 0;
}
