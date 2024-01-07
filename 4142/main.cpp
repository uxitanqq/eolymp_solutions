#include <iostream>

using namespace std;

int main(){
    unsigned long long q, x, a, k = 1;
    cin >> q;
    for (unsigned long long i = 1; i <= q; i++){
        cin >> x;
        k = 1;
        a = 0;
        while (x > 0){
         if (x % 2 == 0)
           a += k;
        x >>= 1;
        k <<= 1;
        }
        cout << a << endl;
    }
    return 0;
}
