#include <iostream>

using namespace std;

int main()
{
    unsigned int a, k;
    cin >> a >> k;
    a &= (1 << k) - 1;
    cout << a << endl;
    return 0;
}
