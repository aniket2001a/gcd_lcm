#include <bits/stdc++.h>

using namespace std;
#define int long long

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a, b);
}

signed main(){
    
    return 0;
}
