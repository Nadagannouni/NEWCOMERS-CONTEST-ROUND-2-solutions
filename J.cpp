#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;cin>>t;
   //t=1;   
   
    while(t--){
        //fact1 : if 2 points have the same value of x they will make n-2 nondegenerate right triangles ( for every xi we have either yi=0 or yi=1 so the number of points with the same x <=2 )
        //fact2: p1(x,1),p2(x-1,0),p3(x+1,0) form a nondegenerate right triangles (we can prove it using Pythagoras' theorem ) so  The angle at p1 is 90°==>if we change p2 or p3  the angle will no longer be 90° so p1 can only form one right triangle of this type(check the second tringle in the note the blue one)
        //same for p1(x,0),p2(x-1,1),p3(x+1,1)
        //so for every point we check if p2 and p3 exits or not 
        ll n;cin>>n;
        vector<pair<ll,ll>> pnt(n);
        map<ll,ll> m;
        map<pair<ll,ll>,ll> mp;
        ll res=0;
        for(int i=0;i<n;i++){
            cin>>pnt[i].first>>pnt[i].second;
            m[pnt[i].first]++;
            mp[{pnt[i].first,pnt[i].second}]++;}
        for(auto e:m){
            if(e.second>1)res+=n-2;}
        for(int i=0;i<n;i++){
            if(mp[{pnt[i].first - 1,!(pnt[i].second)}] && mp[{pnt[i].first + 1,!(pnt[i].second)}])res++;}
            cout<<res<<endl;
        
        
        
      }
      
    
        
    
    
             
    return 0;
}
