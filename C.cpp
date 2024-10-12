#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;cin>>t;
   
   
    while(t--){
      long long n;cin>>n;
      vector<long long> v(n);  
      for (auto &e : v) cin >>e;
      sort(v.begin(), v.end());
      
      if(v[0]==v[n-1]){
         // If all elements are the same, every (i, j) pair with i ≠ j is valid.
         //(ai,aj)==(aj,ai) because ai==aj
        // Total number of pairs = n * (n - 1) 
          cout<<n*(n-1)<<endl;}
      else {
          // - Each occurrence of the smallest element can be paired with any of the (n - j - 1) occurrences of the largest element.
          //==>the number of combinations between these two groups is: i * (n - j - 1).
          //here (ai, aj) != (aj, ai) ==>we multiply the result by 2.
          long long i=0,j=n-1;
          while(i<n || j>=0){
              if(i<n && v[i]==v[0])i++;
              else if(j>=0 && v[j]==v[n-1])j--;
              else break;
          }
          cout<<i*(n-j-1)*2<<endl;
      }
      
      }  
    
        
    
    
             
    return 0;
}
