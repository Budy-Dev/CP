#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long left = 1;
    long right = 1000;
//  int cont = 0;
    
    while (left <= right) {
//      cont++;
        long N = (left + right) / 2;
        
        cout << N << endl;
        cout.flush();
        
        string result;
        cin >> result;
        
        if (result == "correct") {
            return 0;
        } else if( result == "lower"){
            right = N - 1;
        } else {
            left = N + 1;
        }
    }
    return 0;
}
