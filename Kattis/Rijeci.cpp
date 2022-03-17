// Resolução em O(n) usando memoização

#include <bits/stdc++.h>
#define max 46

using namespace std;


int fib[max];


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("rijeci.txt", "r", stdin);
	
	int n;
	cin >> n;
	
	fib[0] = 0;
	fib[1] = 1;
	
	// Essa linha abaixo pode ser removida, foi colocada apenas para resolver o problema em tempo constante O(1)
	if (n == 1) {
		cout << fib[0] << " " << fib[1] << endl;
		return 0;
	}
	
	for (int i = 2; i < max; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	
	cout << fib[n-1] << " " << fib[n] << endl;
	
	return 0;
}
