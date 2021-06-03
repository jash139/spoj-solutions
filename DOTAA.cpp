#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t;
	for(cin>>t; t--;) {
		int n, m, d;
		cin>>n>>m>>d;
		int health[n];
		int maxDamage = 0;
		for(int i = 0; i < n; ++i) {
			cin>>health[i];
			if (health[i] % d != 0) {
				maxDamage += health[i] / d;
			}
		}
		if (maxDamage >= m) {
			cout<<"YES\n";
		} else {
			cout<<"NO\n";
		}
	}
	
	return 0;
}
