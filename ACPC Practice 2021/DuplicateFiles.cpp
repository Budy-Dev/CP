#include <bits/stdc++.h>

using namespace std;

void solve() {
	int N;
	cin >> N;
	
	map<string, int> mapa;
	map<string, int>::iterator it;
	
	for (int i = 0; i < N; i++) {
		string file;
		int id;
		
		cin >> file >> id;
		
		it = mapa.find(file);
		
		if (it != mapa.end()) {
			if (it->second > id)
				it->second = id;
		}
		else 
			mapa.insert(pair<string,int>(file,id));	
	}
	
	int arr[mapa.size()];
	int i = 0;
	
	for (it = mapa.begin(); it != mapa.end(); it++, i++)
		arr[i] = it->second;
	
	sort(arr, arr+mapa.size());
	
	int tam = sizeof(arr)/sizeof(arr[0]);
	
	for (i = 0; i < tam; i++ )
		cout << arr[i] << " ";
}
int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("files.txt", "r", stdin);
	
	int T = 0;
	cin >> T;
	
	while (T--) {
		solve();
		cout << endl;
	}
	
	return 0;
}
