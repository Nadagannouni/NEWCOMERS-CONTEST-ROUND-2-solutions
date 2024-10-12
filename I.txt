#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(string s){
    ll r=s.size()-1,l=0;
    while(l<=r){
        if(s[l]!=s[r])return 0;
        l++;r--;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   int t;cin>>t;
   //t=1;   
   
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        string s1="",s2="",rs=s;
        reverse(rs.begin(),rs.end());

        //since we can just add one character to make it a palindrome the string and its reversal must have just one mismatching character ==> the first mistmatching character(we dont care if we have more because we cant fix more than one position)
        // finding the index of the first mismatching character we have 2 possibilities:
        // 1. Add the mismatching character from the string s to the reversed string.
        //  2. Add the mismatching character from the reversed string rs to the original string.
        //  After trying both modifications, we check if either resulting string (s1 or s2) is a palindrome.
        // example: s=omor ==> rs=romo here the first mismatching is at indesx 0
        // s1=romor s2=oromo s1 is palindrome so yes
        //example2 : s=hckh rs=hkch mism_index=1     ==> s1=hkckh s2=hckch both of them are palindrome so yes
        ll i=0;
        while(i<n && s[i]==rs[i]){
            s1+=s[i];
            s2+=s[i];
            i++;
        }
        if(i<n){
            s1+=rs[i];
            s2+=s[i];
            
        }
        while(i<n){
            s1+=s[i];
            s2+=rs[i];
            i++;
        }
        if(check(s1)||check(s2))cout<<"YES\n";
        else cout<<"NO\n";
    }
        
    
    
             
    return 0;
}
