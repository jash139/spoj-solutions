#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin>>n;
	
	int codes[10000] = {0};
	int ans = 0;
	for(int i = 0; i < n; ++i) {
		int t;
		cin>>t;
		codes[t] = -1;
		int mutual;
		cin>>mutual;
		for(int j = 0; j < mutual; ++j) {
			int temp;
			cin>>temp;
			if (codes[temp] == -1) {
				continue;
			}
			codes[temp]++;
		}
	}
	for(int i = 0; i < 10000; ++i) {
		if (codes[i] > 0) {
			ans++;
		}
	}
	cout<<ans;
	
	return 0;
}
