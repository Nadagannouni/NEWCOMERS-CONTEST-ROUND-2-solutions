#include <bits/stdc++.h>
using namespace std;

int cal(int num){
	int ans = 0;
	while (num){
		ans += num % 10;
		num /= 10;
	}
	return ans;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //Let's use brute force to find the answer.
    //You can check every possible answer from 1(or from 19 which is the 1st perfekto), until we find the k-th perfect integer.
    int k;
	cin>>k;
	int ans = 0;
	while (k){
		ans ++;
		if (cal(ans)==10) k--;
	}
	cout<<ans<<endl;
	return 0;
}
