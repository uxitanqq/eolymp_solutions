#include <iostream>

using namespace std;

int main(){
    unsigned int n, k;
    cin >> n >> k;
    n >>= k;
    n <<= k;
    cout << n << endl;
    return 0;
}
