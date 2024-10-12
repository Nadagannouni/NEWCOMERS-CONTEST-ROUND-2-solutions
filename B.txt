#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(0);  
    cin.tie(0);

    int t; 
    cin>>t;  // Number of test cases

    while (t--) {
        int n; 
        cin>>n;
        vector<int> a(n);  
        for (auto &e:a)cin>>e;
        // Sort the array in descending order
        sort(a.rbegin(),a.rend());
        int i=0,maxi=0;//maxi is the index of the maximum elemnt in the vector from index i to n-1 since
        bool aziz_wins = false;
        // The idea is to ensure that Aziz (first player) can make the last move.
        //example: a=[1 2 2 3 3] Aziz starts by choosing 1, ensuring his win.
        while (i<n&&a[i]==a[maxi]) {
            i++;
            if (i==n&& i%2!=0) {
                cout << "YES\n";  // Aziz wins
                aziz_wins = true;
            } 
            else if (a[i]!=a[maxi]&& i%2!= 0) {
                cout << "YES\n";  // Aziz wins
                aziz_wins = true;
            } else {
                maxi=i;  // Update max_index to the current index
            }
        }

        // If no winning strategy was found for Aziz, print "NO"
        if (!aziz_wins) {
            cout << "NO\n";
        }
    }

    return 0;
}
