#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int cont[26] = {0}, num = 0;
	string s;
	bool isOdd = false;
	
	cin >> s;
	
	for (int i = 0; i < s.length(); i++) {
		cont[s[i] - 'a']++;
	}
	
	for (int i = 0; i < 26; i++) {
		if (cont[i]%2) {
			cout << i << endl;
			num++;
			isOdd = true;
		}
	}
	
	if (isOdd){
		num--;
	}
	
	cout << num;
	return 0;
}
