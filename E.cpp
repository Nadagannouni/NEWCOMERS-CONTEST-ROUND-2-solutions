#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
   ll t;cin>>t;
    while(t--){
//     In all cases where the first team initially led the score, and then the second team, there will be a moment when the score is equal, so it is enough to check only this condition. If it is met, the answer is "NO", otherwise the answer is "YES".

// Let's demonstrate how events could have unfolded without an equal score, if the condition is not met. Let x1>y1
//  and x2>y2 then the events could have occurred as follows:
        //   x1:y1
        //   (x1+1):y1
        //   (x1+2):y1
        //   .
        //   .
        //   x2: y1
        //   x2:(y1+1)
        //   x2: (y1+2)
        //   .
        //   .
        //   x2:y2
       ll x1,x2,y1,y2;cin>>x1>>y1>>x2>>y2;
     if(x1<y1 && x2<y2 || y1<x1 && y2<x2)cout<<"YES\n";
     else cout<<"NO\n";
    }
        
    
    
             
    return 0;
}
