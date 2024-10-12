#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;//cin>>t;
   t=1;   
   
    while(t--){
        //By placing two L-shaped tiles together, we can effectively create a 3×2 rectangle. The two shapes align to fill the space perfectly without any gaps.
        // we have 2 ways to place these 2 shapes: we assign 0 to the 1st way and 1 to the second 
        //for n/2 such 3 × 2 sections, the total number of combinations is: 2×2×…×2(n/2times)=2^(n/2)
        /*exple: n=4 the rectangle can be filled : 00
            01
            10
            11   each bit is a 3*2 rectangle */ 
        //This is equivalent to the number of binary sequences of length n/2 where each bit represents a 3 × 2 arrangement. 

                
      int n;cin>>n;
      if(n%2)cout<<0<<endl;
      else cout<<fixed<<setprecision(0)<<pow(2,n/2)<<endl;
      
      
    }
        
    
    
             
    return 0;
}
