#include <bits/stdc++.h>

using namespace std;


void init_code() {
	#ifndef ONLINE_JUDGE
		freopen("Patuljci.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	#endif
}


int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(NULL);

	init_code();
	
	int v[9];
	int total = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> v[i];
		total += v[i];
	}
	
	int v1[9];
	
	for (int i = 0; i < 9; i++) {
		v1[i] = v[i];
	}
	
	
	int target = total - 100;
	int left = 0, right = 8;
	
	sort(v1,v1+9);
	
	int x, y;

	
	while (left < right) {
		if ((v1[left] + v1[right]) == target) {
			x = v1[left];
			y = v1[right];
			break;
		}else if ((v1[left] + v1[right]) > target) {
			right--;
		} else {
			left++;
		}
	}
	
	for (int i = 0; i < 9; i++) {
		if (v[i] == x || v[i] == y) {
			continue;
		}
		cout << v[i] << endl;
	}
	
   	
	
	return 0;
}

