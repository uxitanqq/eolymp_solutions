#include <iostream>

using namespace std;

int main(){
    int a, b, mask = 1, n = 0, k = 0;
    cin >> a;
    while (a){
        b = mask & a;
        if(b == mask)
            n++;
        k++;
        a >>= 1;
    }
    int amax = 0, amin = 0;
    amin = 1 << n;
    amin--;
    amax = amin;
    amax <<= k - n;
    cout<< amax - amin;
    return 0;
}
