#include <iostream>

using namespace std;

int main(){
    unsigned long long n, k = 1;
    cin >> n;
    while (n > 0) {
        if (n & 1)
            k <<= 1;
        n >>= 1;
    }
    cout << k - 1 << endl;
    return 0;
}
