#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		long long int n;
		cin>>n;
		long long int candy[n];
		long long int total = 0;
		for(long long int i = 0; i < n; ++i) {
			cin>>candy[i];
			total += candy[i];
			total %= n;
		}
		if (total != 0) {
			cout<<"NO\n";
		} else {
			cout<<"YES\n";
		}
	}
	
	return 0;
}
