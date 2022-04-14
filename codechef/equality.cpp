// https://www.codechef.com/problems/EQUALITY

#include <bits/stdc++.h>

using namespace std;

void solve () {
	int n;
	cin >> n;
	
	vector<long long> vec(n);
	
	long long s = 0;
	
	for (int i = 0; i < n; i++) 
		cin >> vec[i];
	
	for (int i = 0; i < n; i++) 
		s+=vec[i];
	
	for (int i = 0; i < n; i++)
		cout << (s/(n-1)) - vec[i] << " ";
}
int main() {
	
	freopen("equality.txt", "r", stdin);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t = 1;
	
	cin >> t;
	
	while (t--) {
		solve();
		cout << endl;
	}
	
	return 0;
	
}
