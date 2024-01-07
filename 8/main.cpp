#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n, k;
    long double l, w;
    cin >> n;
    l = floor(sqrt(n));
    w = ceil (n / l);
    k = 2 * n + l + w;
    cout << k;
    return 0;
}
