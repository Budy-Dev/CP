#include <bits/stdc++.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	int S = 17;
	int N = 8;
	
	
	// Opera��o modular com bit manipulation usando numero de potencia 2
	cout << (S&(N-1));
	cout << endl;
	
	// Determinar se numero � potencia de 2
	cout << (((N & (N-1)) == 0) ? "SIM" : "NAO") << endl;
	
	
	// Desativar o bit mais a direita
	int x = 40;
	
	for (int bit = 0; bit < 32; bit++) {
		if ((x >> bit) & 1){
			cout << bit << endl;
			x^= (1 << bit);
			break;
		}
	} 
 	cout << x << endl;
	
	// Desativar o bit mais a esquerda
	x -= (x & (-x));
	
	
	cout << x << endl;
	
	// Ativar o 0 mais a direita
	for (int bit = 0; bit < 32; bit++) {
		if (((x >> bit) & 1) == 0){
			cout << bit << endl;
			x^= (1 << bit);
			break;
		}
	}
	cout << x << endl;
	
	// 100111
	// Desativar ultima sequecia de 1's
	int y = 39;
	
	for (int bit = 0; bit < 32; bit++) {
		if ((y >> bit) & 1){
			while((y >> bit) & 1)
				y^= (1 << bit++);
			break;	
		}
	} 
 	cout << y << endl;
	return 0;
}