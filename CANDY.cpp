#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	while(true) {
		int n;
		cin>>n;
		if (n == -1) {
			break;
		}
		int count[n];
		int total = 0;
		for(int i = 0; i < n; ++i) {
			cin>>count[i];
			total += count[i];
		}
		
		sort(count, count + n);
		
		int ans = 0;
		if (total % n != 0) {
			cout<<"-1\n";
			continue;
		}
		int perKid = total / n;
		for(int i = n - 1; i >= 0; --i) {
			if (count[i] <= perKid) {
				break;
			}
			ans += count[i] - perKid;
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
