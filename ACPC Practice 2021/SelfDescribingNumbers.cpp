#include <bits/stdc++.h>

using namespace std;


void solve() {
	
	
	long long n;
	cin >> n;
	
	string s = to_string(n);
	
	int freq[10] = {0};
	
	bool ans = true;
	
	for (int i = 0; s[i]; i++)
		freq[s[i] - '0']++;
	
	for (int i = 0; s[i]; i++) {
		int x = s[i] - '0';
		if (x != freq[x-1]){
			ans = false;
			break;
		}
	}
	
	cout << ((ans) ? "self-describing" : "not self-describing") << endl;
	
}


int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("self.txt", "r", stdin);
	
	int T = 0;
	cin >> T;
	
	while (T--) {
		solve();
	}
	
	return 0;
}
