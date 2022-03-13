#include <bits/stdc++.h>

using namespace std;

void solve() {	
	string s;
	cin >> s;
	
	bool found = false;
	int ans = 0;
	
	for (int i = 0; s[i]; i++) {
		if (s[i] == 'U')
			found = true;
		if (found && s[i] == 'U')
			ans++;
		if (found && s[i] == 'D'){
			cout << ans << endl;
			return;
		}
	}
	
	cout << ans << endl;
}

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	
	freopen("adam.txt", "r", stdin);
	
	int T = 0;
	
	
	cin >> T;
	
	while (T--) {
		solve();
	}
	return 0;
}
