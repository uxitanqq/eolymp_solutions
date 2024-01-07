#include <iostream>

using namespace std;

int main(){
    unsigned long long t, a, n, k, p;
    cin >> t;
    for (long long i = 1; i <= t; i++){
        cin >> a >> n;
        k = a ^ (a - a % n);
        p = a ^ (a - a % n + n);
        if (k < p)
             cout << k << endl;
        else cout << p << endl;
    }
    return 0;
}
