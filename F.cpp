#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
   ll t;cin>>t;
    while(t--){
    //   There are many ways to solve this problem, the simplest way is as follows. Let's find the minimum and maximum coordinate x
    //  among all the corners of the square. The difference of these coordinates will give us the length of the square side d=xmax−xmin
    // After that, we can calculate the area of the square as s=d2
       vector<ll> x(4),y(4);
       for(int i=0;i<4;i++){
           cin>>x[i]>>y[i];
       }
       sort(x.begin(),x.end());
       ll d=x[3]-x[0];
       cout<<d*d<<endl;
    }
        
    
    
             
    return 0;
}
