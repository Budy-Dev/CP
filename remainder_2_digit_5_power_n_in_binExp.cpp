// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res%100;
}
int main() {
    long long n; cin >> n;
    cout << binpow(5,n,1e9) << endl;
 
 
    return 0;
}
