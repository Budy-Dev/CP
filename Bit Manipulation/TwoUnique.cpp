#include<bits/stdc++.h>
using namespace std;


// Given an array where every number is repeated twice except for 2 number, print this two numbers

int main()
{
    int n;
    cin >> n;
    
    int v[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum ^= v[i];
    }
    
    vector<int> tmp;
    int tmp_sum = sum;
    int pos = 0;
    
    while (tmp_sum > 0) {
        if (tmp_sum & 1)
            break;
        pos++;
        tmp_sum >>= 1;
    }
    
    int mask = (1 << pos);
    
    for (int i = 0; i < n; i++)
        if (v[i] & mask)
            tmp.push_back(v[i]);
            
    int a = 0;
    for (int i = 0; i < tmp.size(); i++)
        a ^= tmp[i];
    
    int b = sum ^ a;
    
    if (a > b)
        cout << b << " " << a << endl;
    else
        cout << a << " " << b << endl;
        
    return 0;
}
