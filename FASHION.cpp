#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n;
		cin>>n;
		int men[n], women[n];
		
		for(int i = 0; i < n; ++i) {
			cin>>men[i];
		}
		sort(men, men + n);
		for(int i = 0; i < n; ++i) {
			cin>>women[i];
		}
		sort(women, women + n);
		
		int ans = 0;
		for(int i = 0; i < n; ++i) {
			ans += men[i] * women[i];
		}
		cout<<ans<<"\n";
		
	}
	
	return 0;
}
