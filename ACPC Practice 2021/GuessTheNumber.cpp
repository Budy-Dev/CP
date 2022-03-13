#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long left = 1;
	long right = 100000000;
	//int cont = 0;
	
	while (left <= right) {
		//cont++;
		long N = (left + right) / 2;
		
		cout << N << endl;
		cout.flush();
		
		string result;
		cin >> result;
		
		if (result == "=") {
			cout << "! " << N << endl;
			//cout << cont;
			return 0;
		} else if( result == "<"){
			right = N - 1;
		} else {
			left = N + 1;
		}
	}
	return 0;
}
