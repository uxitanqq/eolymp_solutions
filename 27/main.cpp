#include <iostream>

using namespace std;

int main()
{
    unsigned long long n, f = 1, k = 0, q, m;
    cin >> n;
    q = n;
    m = n;
    while (q){
        q >>= 1;
        k++;
    }
    for (long long i = 1; i <= k;i++)
        f <<= 1;
    for (long long i = 1; i <= k; i++) {
        n <<= 1;
        if (n < f)
            n = n % f;
        else
            n = n % f + 1;
        if(m < n)
            m = n;
    }
    cout << m;
    return 0;
}
