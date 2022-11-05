#include<bits/stdc++.h>
using namespace std;


// Given an array where all the numbers appear 3 times except for one, return this one value.

int main()
{
    int n; cin >> n;
    
    int v[n];
    
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int tmp[32] = {0};
    
    for (int i = 0; i < n; i++) {
        int x = v[i];
        int j = 0;
        while (x) {
            tmp[j++] += (x & 1);
            x >>= 1;
        }
    }
    int ans = 0, pos = 1;
    for (int &x : tmp) {
        ans += (x%3) * pos;
        pos <<= 1;
    }
    
    cout << ans << endl;
        
    return 0;
}
